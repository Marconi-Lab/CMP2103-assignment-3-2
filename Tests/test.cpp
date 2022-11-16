#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.h"


std::string Eq_triangle = "The triangle is an equilateral triangle";
std::string Iso_triangle = "The triangle is an isosceles triangle";
std::string Right_ang_triangle = "The triangle is a right-angled triangle";
std::string Sca_triangle = "The triangle is a scalene triangle";

TEST_CASE( "Test_1", "Tests" ) {
    REQUIRE( check_triangle(3,4,5) == Right_ang_triangle);
    REQUIRE( check_triangle(3,3,5) == Iso_triangle);
    REQUIRE( check_triangle(3,3,3) == Eq_triangle);
    REQUIRE( check_triangle(52,24,13) == Sca_triangle);
}
TEST_CASE( "Test_2", "Tests" ) {
    REQUIRE( check_triangle(5,4,3) == Right_ang_triangle);
}

