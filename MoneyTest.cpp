#include <gtest/gtest.h>
#include "Money.hpp"

class MoneyTest : public ::testing::Test
{
	
};

TEST_F( MoneyTest, testMultiplication )
{
	Dollar five( 5 );
	five.times( 2 );
	EXPECT_EQ( 10, five.amount );

	five.times( 3 );
	EXPECT_EQ( 15, five.amount );
}
