#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *b = 
    calloc(4,  sizeof(int));
  printf("%d\n", b[4]);
  free(b);
  return 0;
}
