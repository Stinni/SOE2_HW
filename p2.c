#include <stdio.h>
#include <stdlib.h>
int main()
{
  int ret;
  int *b = 
    malloc(4 * sizeof(int));
  ret = b[2];
  free(b);
  return ret;
}
