project(unit_tests)

# 'lib' is the folder with Google Test sources
add_subdirectory(lib/googletest)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})


add_executable(unit_tests test_reg.cpp)
target_link_libraries(unit_tests gtest gtest_main)

add_test(NAME unit COMMAND ${CMAKE_BINARY_DIR}/tests/unit_tests)