char findTheDifference(char* s, char* t)
{
    int     len1 = strlen(s);
    int     len2 = strlen(t);
    int     total_len = len1 + len2;
    int     i = 0;
    int     j = 0;
    char    *combined;
    char    new = 0;

    combined = (char *)malloc(sizeof(char) * (len1 + len2 + 1));
    if (NULL == combined)
        return (NULL);
    
    while (i < strlen(s))
    {
        combined[i] = s[i];
        i++;
    }
    while (j < strlen(t))
    {
        combined[i + j] = t[j];
        j++;
    }
    combined[i + j] = '\0';
    for (int k = 0; k < strlen(combined); k++)
    {
        new ^= combined[k];
    }
    return (new);
}