#include <gtest/gtest.h>
#include "Money.hpp"

class MoneyTest : public ::testing::Test
{
	
};

TEST_F( MoneyTest, testMultiplication )
{
	Dollar five( 5 );
	EXPECT_TRUE( Dollar( 10 ) == five.times( 2 ) );
	EXPECT_TRUE( Dollar( 15 ) == five.times( 3 ) );
}

TEST_F( MoneyTest, testEquality )
{
	EXPECT_TRUE( Dollar( 5 ) == Dollar( 5 ) );
	EXPECT_FALSE( Dollar( 5 ) == Dollar( 6 ) );
}

TEST_F( MoneyTest, testFrancMultiplication )
{
	Frac five( 5 );
	EXPECT_TRUE( Franc( 10 ) == five.times( 2 ) );
	EXPECT_TRUE( Franc( 15 ) == five.times( 3 ) );
}
