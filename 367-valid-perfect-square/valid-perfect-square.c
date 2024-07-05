bool isPerfectSquare(int num)
{
    long long int   i;

    if (num < 1)
        return (false);
    i = 1;
    while (1)
    {
        if (i * i == num)
            return (true);
        if (i * i > num)
            return (false);
        i++;
    }
}