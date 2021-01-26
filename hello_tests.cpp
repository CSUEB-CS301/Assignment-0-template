#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "say_hello.h"

TEST_CASE("The ultimate answer") {
    REQUIRE( 6*9 == 54 );
}

TEST_CASE("Should return 'Hello, World!'") {
    REQUIRE(hello() == "Hello, World!");
}
