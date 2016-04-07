#include <gtest/gtest.h>
#include <iostream>

#include "../include/SquareRoot.hpp"

class SquareRootTest : public ::testing::Test
{
 public:
    SquareRoot *object;

    virtual void SetUp () {
        //std::cout << "Calling SetUp" << std::endl;
    }

    virtual void TearDown () {
        //std::cout << "Calling TearDown" << std::endl;
    }
};

TEST_F (SquareRootTest, GetNumber_WithoutSetNumber_ShouldReturnZero) {
    object = new SquareRoot();

    EXPECT_EQ(0.0, object->getNumber());
}

TEST_F (SquareRootTest, GetNumber_WithSetNumber_ShouldReturnNumber) {
    object = new SquareRoot();

    object->setNumber(9.0);
    EXPECT_EQ(9.0, object->getNumber());
}

TEST_F (SquareRootTest, Calculate_WithPositiveNumber_ShouldReturnPositiveValue) {
    object = new SquareRoot();

    object->setNumber(0.0);
    EXPECT_EQ(0.0, object->calculate());
    object->setNumber(9.0);
    EXPECT_EQ(3.0, object->calculate());
}

TEST_F (SquareRootTest, Calculate_WithNegativeNumber_ShouldReturnConstantNegative) {
    object = new SquareRoot();

    object->setNumber(-18.0);
    EXPECT_EQ(-1, object->calculate());
    object->setNumber(-9.0);
    EXPECT_EQ(-1, object->calculate());
}

