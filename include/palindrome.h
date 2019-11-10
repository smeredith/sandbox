#pragma once

#include <algorithm>
#include <string>

std::string toBinaryString(int i)
{
    std::string result;

    if (i == 0)
    {
        return "0";
    }

    while (i)
    {
        if (i & 0x01)
        {
            result.push_back('1');
        }
        else
        {
            result.push_back('0');
        }
        i >>= 1;
    }

    std::reverse(result.begin(), result.end());
    return result;
}

bool isPalindrome(const std::string& s)
{
    return std::equal(s.cbegin(), s.cend(), s.crbegin(), s.crend());
}
