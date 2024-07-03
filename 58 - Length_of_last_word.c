int lengthOfLastWord(char* s)
{
  int len, i, j;
  
  len = 0;
  i = 0;
  j = 0;
  while (s[i + 1])
  {
    if ((s[i] == ' ') && (s[i + 1] != ' '))
    {
      len = 0;
      j = i + 1;
    }
    i++;
  } 
  while ((s[j] != ' ') && s[j])
  {
    len++;
    j++;
  }
  return (len);
}
