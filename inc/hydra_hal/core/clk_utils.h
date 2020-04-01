//
// Created by Ben on 2020-03-28.
//

#ifndef TESTS_CLK_UTILS_H
#define TESTS_CLK_UTILS_H

#include <tuple>
#include <array>
#include <cmath>

using clock_data = std::tuple<int, int, int, int, int>;

namespace hydra::util {
    constexpr double round(double x) {
        return (x >= 0.0) ? int(x + 0.5) : int(x - 0.5);
    }
}

/*!
 * \brief Calculates the clock pre-scalars given the desired system clock frequency and the input clock frequncy
 * @param sys_clk The desired system clock frequency (ex. 96e6 fo r96MHz)
 * @param input_clk The input clock frequency (ex. 16e6 for 16MHz)
 * @return
 */
constexpr auto calculate_clk(double sys_clk, double input_clk) {
    input_clk = input_clk / 1e6;
    sys_clk   = sys_clk / 1e6;
    double M  = input_clk / 2;

    int M_best{}, N_best{}, P_best{}, Q_best{}, f_best{};

    for (int P = 2; P <= 8; P = P + 2) {
        double N = sys_clk / 2.0 * (double) P;
        N = hydra::util::round(N / 24) * 24;
        double Q = N / 24;

        double vco_clk      = input_clk * (N / M);
        double sys_clk_calc = vco_clk / P;

        if (100 >= vco_clk || vco_clk >= 432) {
            continue;
        }

        if ((std::abs(input_clk - sys_clk_calc) < std::abs(input_clk - f_best) && sys_clk_calc <= 100) || M_best == 0) {
            M_best = (int) M;
            N_best = (int) N;
            Q_best = (int) Q;
            P_best = (int) P;
            f_best = (int) (sys_clk_calc * 1e6);
        }
    }
    return clock_data{M_best, N_best, P_best / 2 - 1, Q_best, f_best};
}

#endif //TESTS_CLK_UTILS_H
