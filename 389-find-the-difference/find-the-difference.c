char findTheDifference(char* s, char* t)
{
    char    new = 0;
    int     len1 = strlen(s);
    int     len2 = strlen(t);

    for (int i = 0; i < len1; i++)
        new ^= s[i];
    for (int j = 0; j < len2; j++)
        new ^= t[j];
    return (new);
}