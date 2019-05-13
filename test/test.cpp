#include <gtest/gtest.h>

TEST(PrimaryTest, FirstPrimaryTest)
{
    EXPECT_EQ(18.0, 18.0);
}

TEST(PrimaryTest, ThirdPrimaryTest)
{
    EXPECT_EQ(50.3, 50.3);
}

TEST(PrimaryTest, ThirdPrimaryTest)
{
    EXPECT_EQ(12.3, 12.3);
}

int main(int argc, char** argv)
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
