//test_factorial.cpp

#include <sample_functions.h>
# include "gtest/gtest.h"



TEST(FactorialTest, postive) {
	 EXPECT_EQ(1, factorial(1));
	 ASSERT_EQ(3, factorial(2));
	 EXPECT_EQ(24, factorial(4));
	 EXPECT_EQ(40320, factorial(8));
}

TEST(FactorialTest, negative) {           //TEST is a predefined macro defined in gtest.h
	EXPECT_EQ(1, factorial(-5));
	EXPECT_EQ(1, factorial(-1));
	EXPECT_GT(factorial(-10), 0);
}

#if 1
TEST(FactorialTest, DISABLE_zero) { // Test won't execute on adding prefix DISABLED
	 EXPECT_EQ(1, factorial(0));
}
#endif

// Tests IsPrime()

// Tests negative input.
TEST(IsPrimeTest, Negative) {
  // This test belongs to the IsPrimeTest test case.

  EXPECT_FALSE(IsPrime(-1));
  EXPECT_FALSE(IsPrime(-2));
 // EXPECT_FALSE(IsPrime(INT_MIN));
}

// Tests some trivial cases.
TEST(IsPrimeTest, Trivial) {
  EXPECT_FALSE(IsPrime(0));
  EXPECT_FALSE(IsPrime(1));
  EXPECT_TRUE(IsPrime(2));
  EXPECT_TRUE(IsPrime(3));
}

// Tests positive input.
TEST(IsPrimeTest, Positive) {
  EXPECT_FALSE(IsPrime(4));
  EXPECT_TRUE(IsPrime(5));
  EXPECT_FALSE(IsPrime(6));
  EXPECT_TRUE(IsPrime(23));
}


