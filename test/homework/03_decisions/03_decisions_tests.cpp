#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "decisions.h"

TEST_CASE("Verify Test Configuration", "verification") {
	REQUIRE(true == true);
}

TEST_CASE("Verify switch case") {
	REQUIRE(get_letter_grade_using_switch(50) == "F");
	REQUIRE(get_letter_grade_using_switch(51) == "D");
	REQUIRE(get_letter_grade_using_switch(66) == "C");
}