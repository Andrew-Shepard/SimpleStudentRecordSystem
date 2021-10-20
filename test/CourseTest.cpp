#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "../src/Course.h"
Course course("code","title",0,1.0);

TEST_CASE( "Life, the universe and everything", "[42][theAnswer]" ) {
    REQUIRE( course == course );
}