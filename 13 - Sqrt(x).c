int mySqrt(int x) 
{
  long long int i, sum, copy;
  
  copy = x;
  i = 2;
  if (x == 0 || x == 1)
    return (x);
  
  while (i < copy / 2)
  {
    sum = i * i;
    if (sum >= copy)
      break ; 
    i++;
  }
  if (i * i > copy)
    return (i - 1);
  return (i);
}
