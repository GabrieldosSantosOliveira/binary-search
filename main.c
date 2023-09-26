#include <stdio.h>
#include "binary_search.h"
int main()
{
  int primes[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  int position = binary_search(primes, 10, 5);
  printf("Position of element 5 in the array: %d\n", position);
  return 0;
}