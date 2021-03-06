#include <gtest/gtest.h>

#include "../include/functions.hpp"

TEST (SquareRootFunction, PositiveNos) {
    EXPECT_EQ (18.0, square_root(324.0));
    EXPECT_EQ (25.4, square_root(645.16));
    EXPECT_EQ (50.3321, square_root(2533.310224));
}

TEST (SquareRootFunction, ZeroAndNegativeNos) {
    ASSERT_EQ(0.0, square_root(0.0));
    ASSERT_EQ(-1, square_root(-22.0));
}

TEST (DieFunction, CustomExitFunction) {
    // Run death tests in thread safe mode
    ::testing::FLAGS_gtest_death_test_style = "threadsafe";

    ASSERT_EXIT(die(0), ::testing::ExitedWithCode(0), "");
    ASSERT_EXIT(die(1), ::testing::ExitedWithCode(1), "Error");
}

