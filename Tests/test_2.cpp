#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "../main.h"

std::string Eq_triangle = "The triangle is an equilateral triangle";
std::string Iso_triangle = "The triangle is an isosceles triangle";
std::string Right_ang_triangle = "The triangle is a right-angled triangle";
std::string Sca_triangle = "The triangle is a scalene triangle";

TEST_CASE( "Tests_3", "Tests" ) {
    REQUIRE(check_triangle(10,8,6) == Right_ang_triangle);
    REQUIRE(check_triangle(13,13,25) == Iso_triangle);
    REQUIRE(check_triangle(3,31,30) == Sca_triangle);
    REQUIRE(check_triangle(15,9,12) == Right_ang_triangle);
    REQUIRE(check_triangle(2,4,3) == Sca_triangle);
}
TEST_CASE( "Tests_4", "Tests" ) {
    REQUIRE( check_triangle(8,10,6) == Right_ang_triangle);
}

