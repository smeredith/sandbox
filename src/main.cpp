#include <palindrome.h>
#include <algorithm>
#include <iostream>
#include <string>

using namespace std;

int main()
{
    uint64_t sum = 0;

    for (int i = 0; i < 1000000; ++i)
    {
        auto decimalString = to_string(i);
        if (isPalindrome(decimalString))
        {
            auto binaryString = toBinaryString(i);
            if (isPalindrome(binaryString))
            {
                sum += i;
                cout << decimalString << " " << binaryString << "\n";
            }
        }
    }

    cout << sum << "\n";
}
