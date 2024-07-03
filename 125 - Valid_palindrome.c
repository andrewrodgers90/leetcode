bool isPalindrome(char* s)
{
  int i, j, end, print_count;
  char    *str;
  
  print_count = 0;
  i = 0;
  while (s[i])
  {
    if (isalnum(s[i]))
      print_count++;
    i++;
  }
  str = (char *)malloc(sizeof(char) * print_count + 1);
  if (NULL == str)
    return (NULL);
  i = 0;
  j = 0;
  while (s[j])
  {
    if (isalnum(s[j]))
    {
      str[i] = s[j];
      i++;
    }
    j++;
  }
  str[i] = '\0';
  i = 0;
  end = strlen(str) - 1;
  while (i < end)
  {
    if (tolower(str[i]) != tolower(str[end]))
      return (false);
    i++;
    end--;
  }
  return (true);
}
