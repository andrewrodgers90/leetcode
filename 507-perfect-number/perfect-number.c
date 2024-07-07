bool checkPerfectNumber(int num)
{
    int sum;
    int i;

    if (num <= 1)
        return (false);
    sum = 1;
    for (int i = 2; i <= (int)sqrt(num); i++)
    {
        if (num % i == 0)
        {
            sum += i;
            if (i != num / i)
                sum += num / i;
        }
    }
    return (sum == num);
}