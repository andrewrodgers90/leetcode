bool isPowerOfTwo(int n)
{
  if (n < 1)
    return (false);
  long long int i;
  
  i = 1;
  while (1)
  {
    if (i == n)
      return (true);
    if (i > n)
      return (false);
    i = i * 2;
  }
}
