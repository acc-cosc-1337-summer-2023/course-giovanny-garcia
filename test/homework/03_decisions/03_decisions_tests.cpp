#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

/*TEST_CASE("Verify correct grade for int value"){
	REQUIRE(get_letter_grade_using_switch(95) == 'A');
	REQUIRE(get_letter_grade_using_if(85) == 'B');
}
*/