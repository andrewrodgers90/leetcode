bool detectCapitalUse(char* word)
{
    int len;
    int upperCount;

    len = 0;
    upperCount = 0;

    while (word[len] != '\0')
    {
        if (isupper(word[len]))
            upperCount++;
        len++;
    }
    if (upperCount == 0 || upperCount == len || (upperCount == 1 && isupper(word[0])))
        return (true);
    return (false);
}