#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *b = 
    calloc(4,  sizeof(int));
  b[2] = 1;
  free(b);
  printf("%d\n", b[2]);
  return 0;
}
