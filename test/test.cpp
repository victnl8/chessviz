#include <gtest/gtest.h>

TEST(PrimaryTest, FirstPrimaryTest)
{
    EXPECT_EQ (18.0, 18.0); //true
}

TEST(PrimaryTest, SecondPrimaryTest)
{
    EXPECT_EQ (25.4, 25.0); //false
}

TEST(PrimaryTest, ThirdPrimaryTest)
{
    EXPECT_EQ (50.3321, 50.3321); //true
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
