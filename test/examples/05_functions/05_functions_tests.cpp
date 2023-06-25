#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "val_ref.h"
#include "func.h"
#include "default.h"


TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test value data parameter")
{
	auto num = 10;
	value_param(num);

	REQUIRE(num == 10);
}

TEST_CASE("Test reference parameter")
{
	auto num = 10;
	reference_param(num);

	REQUIRE(num == 20);
}

TEST_CASE("Test a function default parameters")
{
	REQUIRE(add_numbers(5, 10) == 15);
	REQUIRE(add_numbers(5) == 15);
}

TEST_CASE("Test a function default parameters INT DOUBLE int int")
{
	REQUIRE(add_numbers(5, 10.5) == 55);
}

/*TEST_CASE("Test function returns max value") unable to find out how to run my test cases since I am running into errors with cmake
{ 
	REQUIRE(get_vector_max_value(vector<int>{5,7,-1,99,-100,10}) == 99);
	REQUIRE(get_vector_max_value(vector<int>{-50,0,-51,50,-99,-100}) == 50);
	REQUIRE(get_square_of_each_element(vector<int>{3,7,2,5,10}) == vector<int>{9,49,4,25,100});
	REQUIRE(get_square_of_each_element(vector<int>{6,1,8,9,4}) == vector<int>{36,1,64,81,16});
}*/