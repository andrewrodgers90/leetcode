int countSegments(char* s)
{
    int i;
    int count;
    int len;

    i = 0;
    count = 0;
    len = strlen(s);
    while (i < len)
    {
        while (s[i] == ' ')
            i++;
        if (i < len && s[i] != ' ')
        {
            count++;
            while (s[i] != ' ' && i < len)
                i++;
        }
        i++;
    }
    return (count);
}