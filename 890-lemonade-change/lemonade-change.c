bool lemonadeChange(int* bills, int billsSize)
{
    int    arr[2] = {0};
    int i;

    i = 0;
    while (i < billsSize)
    {
        if (bills[i] == 5)
            arr[0]++;
        else if (bills[i] == 10)
        {
            if (arr[0] == 0)
                return (false);
            arr[0]--;
            arr[1]++;
        }
        else
        {
            if (arr[0] > 0 && arr[1] > 0)
            {
                arr[0]--;
                arr[1]--;
            }
            else if (arr[0] >= 3)
                arr[0] -= 3;
            else
                return (false);
        }
        printf("5: %d\t10: %d\n", arr[0], arr[1]);
        i++;
    }
    return (true);
}