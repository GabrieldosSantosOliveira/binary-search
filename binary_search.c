#include <math.h>

int binary_search(int array[], int length, int targetValue)
{
  
  int begin = 0;
  int end = length - 1;

  while (begin <= end)
  {
    int middle = floor((begin + end) / 2);
    if (array[middle] == targetValue)
      return middle;
    else if (targetValue < array[middle])
      end = middle - 1;
    else
      begin = middle + 1;
  }
  return -1;
}
