// Check palindrome

bool check(int num)
{
    int n = num;
    int d = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;

        d = (d * 10) + ld;
    }

    return d == num;
}