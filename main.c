#include <stdio.h>
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
int main()
{
  int primes[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  int position = binary_search(primes, 10, 5);
  printf("Position of element 5 in the array: %d\n", position);
  return 0;
}