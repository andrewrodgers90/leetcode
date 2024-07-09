char findTheDifference(char* s, char* t)
{
    char    arr[126] = {0};

    for (int i = 0; i < strlen(s); i++)
    {
        arr[s[i]] += 1;
    }
    for (int j = 0; j < strlen(t); j++)
    {
        arr[t[j]] -= 1;
    }
    int k = 0;
    while (k < 126)
    {
        if (arr[k] == -1)
            break ;
        k++;
    }
    return ((char)k);
}