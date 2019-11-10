#include <palindrome.h>
#include <catch2/catch.hpp>
#include <string>

using namespace std;

TEST_CASE("toBinaryString")
{
    SECTION("0")
    {
        REQUIRE("0" == toBinaryString(0));
    }
    SECTION("1")
    {
        REQUIRE("1" == toBinaryString(1));
    }
    SECTION("2")
    {
        REQUIRE("10" == toBinaryString(2));
    }
    SECTION("3")
    {
        REQUIRE("11" == toBinaryString(3));
    }
    SECTION("585")
    {
        REQUIRE("1001001001" == toBinaryString(585));
    }
}

TEST_CASE("isPalindrome")
{
    SECTION("no")
    {
        REQUIRE(!isPalindrome("no"));
    }
    SECTION("yes")
    {
        REQUIRE(isPalindrome("pip"));
    }
}

