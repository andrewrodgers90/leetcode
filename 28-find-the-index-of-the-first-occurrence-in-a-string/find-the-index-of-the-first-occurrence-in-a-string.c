int strStr(char* haystack, char* needle)
{
    int	i;
	int	j;

	i = 0;
	if (needle[0] == '\0')
		return (haystack);
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i + j] == needle[j])
		{
			while (haystack[i + j] == needle[j])
			{
				j++;
				if (needle[j] == '\0')
					return (i);
			}
		}
		i++;
	}
	return (-1);    
}