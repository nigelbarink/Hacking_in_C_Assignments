#include <stdio.h>
#include "exercise3.h"

int main(void)
{
  int a[10], b[10], r[10];
  unsigned int i;

  for(i=0;i<10;i++)
  {
    a[i] = b[i] = i;
  }

  addvector(r, a, b, 10);

  for(i=0;i<10;i++)
  {
    printf("%d %d %d\n", a[i], b[i], r[i]); 
  }

  return 0;
}
