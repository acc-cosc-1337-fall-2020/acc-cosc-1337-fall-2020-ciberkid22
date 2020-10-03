#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "while.h"
#include "value_ref.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Test sum of squares fucntion")
{
	REQUIRE(sum_of_squares(3) == 14);
	REQUIRE(sum_of_squares(4) == 30);
	REQUIRE(sum_of_squares(5) == 55);
}

TEST_CASE("Test sum of squares fucntion 2")
{
	REQUIRE(sum_of_squares_2(3) == 14);
	REQUIRE(sum_of_squares_2(4) == 30);
	REQUIRE(sum_of_squares_2(5) == 55);
}

TEST_CASE("Test get_area default parameters")
{
	REQUIRE(get_area(5, 5) == 25);
	REQUIRE(get_area() == 200);
	REQUIRE(get_area(5, 10) == 50);
}