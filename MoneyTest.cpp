#include <gtest/gtest.h>
#include "Money.hpp"

class MoneyTest : public ::testing::Test
{
	
};

TEST_F( MoneyTest, testMultiplication )
{
	Dollar five( 5 );
	Dollar product = five.times( 2 );
	EXPECT_EQ( 10, product.amount );

	product = five.times( 3 );
	EXPECT_EQ( 15, product.amount );
}

TEST_F( MoneyTest, testEquality )
{
	EXPECT_TRUE( Dollar( 5 ).equals( Dollar( 5 ) ) );
	EXPECT_FALSE( Dollar( 5 ).equals( Dollar( 6 ) ) );
}
