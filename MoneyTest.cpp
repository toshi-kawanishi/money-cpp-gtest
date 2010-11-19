#include <gtest/gtest.h>

class MoneyTest : public ::testing::Test
{
	
};

TEST_F( MoneyTest, testMultiplication )
{
	Dollar five;
	five.times( 2 );
	EXPECT_EQ( 10, five.amount );
}
