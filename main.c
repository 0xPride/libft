#include <stdio.h>
#include "libft.h"

int main()
{
  int a[] = {1,2,3,4,5,5};
  int b[] = {11,12,13,14,15};
  int *c = (int *)ft_memcpy(a,b,(sizeof(int) * 4));
  printf("%i\n", c[0]);
  printf("%i\n", c[1]);
  printf("%i\n", c[2]);
  printf("%i\n", c[3]);
  printf("%i\n", c[4]);
}
