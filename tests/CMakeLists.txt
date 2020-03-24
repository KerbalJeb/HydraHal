# 'Google_test' is the subproject name
project(tests)
set(CMAKE_CXX_STANDARD 17)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(runTests test_reg.cpp)
target_link_libraries(runTests gtest gtest_main)