// Armstrong number

bool check(int num)
{
    int n = num;
    int sum = 0;
    while (n > 0)
    {
        int ld = n % 10;
        n = n / 10;

        sum = sum + (ld * ld * ld);
    }

    return num == sum;
}