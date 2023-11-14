/**
 * Unit Tests for Password class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Password.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PasswordTest, smoke_test)
{
    ASSERT_TRUE( 1 == 1 );
}
TEST(PasswordTest, single_letter_password)
{
    Password my_password;
	int actual = my_password.count_leading_characters("Z");
	ASSERT_EQ(1,actual);
}
TEST(PasswordTest, mixed_case_password)
{
    Password my_password;
    int actual = my_password.has_mixed_case("aBcD");
    ASSERT_EQ(1,actual);
}
TEST(PasswordTest, set_password)
{
	Password my_password;
	my_password.set("pAsSwOrD");
	int actual = my_password.authenticate("pAsSwOrD");
	ASSERT_EQ(1,actual);
}