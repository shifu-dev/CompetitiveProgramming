// Count number of digits

int count1(int n)
{
    int count = 0;

    while (n > 0)
    {
        n = n /10;
        count++;
    }

    return count;
}

int count2(int n)
{
    return (int)log10(n) + 1;
}
