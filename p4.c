#include <stdio.h>
#include <stdlib.h>
int main()
{
  int *b = 
    calloc(4,  sizeof(int));
  printf("%d\n", b[3]);
  return 0;
}
