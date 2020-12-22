#include "gtest/gtest.h"
#include "Formula.h"

TEST(blaTest, test1) {
    //arrange
    //act
    //assert
    EXPECT_EQ (Formula::bla (0),  0);
    EXPECT_EQ (Formula::bla (10), 20);
    EXPECT_EQ (Formula::bla (50), 100);
    EXPECT_EQ (Formula::bla (2), 4);

    ASSERT_NEAR(0.00145, 0.00146, 0.0001);
    /* ASSERT_FLOAT_EQ(0.00145, 0.00145); */
    ASSERT_NEAR(0.00145, 0.00146, 0.001);
}

