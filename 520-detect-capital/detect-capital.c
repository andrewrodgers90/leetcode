bool detectCapitalUse(char* word)
{
    int i;
    int len;
    int upperCount;

    i = 0;
    len = strlen(word);
    upperCount = 0;

    while (i < len)
    {
        if (isupper(word[i]))
            upperCount++;
        i++;
    }
    if (upperCount == 0 || upperCount == len || (upperCount == 1 && isupper(word[0])))
        return (true);
    return (false);
}