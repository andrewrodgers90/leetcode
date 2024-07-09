char nextGreatestLetter(char* letters, int lettersSize, char target)
{
    int     i;

    i = 0;
    while (i < lettersSize)
    {
        if ((int)letters[i] > (int)target)
            return (letters[i]);
        i++;
    }
    return (letters[0]);
}