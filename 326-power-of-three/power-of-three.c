bool isPowerOfThree(int n)
{
    int i;

    if (n < 1)
        return (false);
    i = 0;
    while (n % 3 == 0)
        n /= 3;
    return (n == 1);
}