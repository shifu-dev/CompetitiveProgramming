// Reverse number

#include <string>
using namespace std;

int reverse(int n)
{
    int result = 0;

    while (n > 0)
    {
        int digit = n % 10;
        result = result * 10 + digit;
        n = n / 10;
    }

    return result;
}

string printReverse(int n)
{
    string result;

    bool addZeros = false;
    while (n > 0)
    {
        int digit = n % 10;
        n = n / 10;

        if (digit == 0)
        {
            result.push_back('0' + digit);
            addZeros = true;
        }
        else
        {
            if (addZeros)
                result.push_back('0' + digit);
        }
    }

    return result;
}