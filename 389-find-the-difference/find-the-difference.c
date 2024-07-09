char findTheDifference(char* s, char* t)
{
    char    new = 0;

    for (int i = 0; i < strlen(s); i++)
        new ^= s[i];
    for (int j = 0; j < strlen(t); j++)
        new ^= t[j];
    return (new);
}