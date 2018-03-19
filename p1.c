#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *b = 
    malloc(4 * sizeof(int));
  b[2] = 1;
  free(b);
  free(b);
  return 0;
}
