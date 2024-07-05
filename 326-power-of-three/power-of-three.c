bool isPowerOfThree(int n)
{
    long long int i;

    if (n == 1)
        return (true);
    if (n < 1)
        return (false);
    i = 1;
    while (1)
    {
        i *= 3;
        if (i == n)
            return (true);
        if (i > n)
            return (false);
    }
}