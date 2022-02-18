int findMax(int *vals, int numels)    // incorrect version
{
  int i, max = *vals++;   // get the first element and increment
  for (i = 1; i < numels; i++)
    if (max < *vals++)
      max = *vals;
  return (max);
}
