int countSegments(char* s)
{
    int i;
    int count;

    i = 0;
    count = 0;
    if (strlen(s) == 0)
        return (0);
    while (i < strlen(s))
    {
        while (s[i] == ' ')
            i++;
        if (s[i] != '\0')
        {
            count++;
            while (s[i] != ' ' && s[i])
                i++;
        }
        i++;
    }
    return (count);
}