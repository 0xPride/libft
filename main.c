#include <stdio.h>
#include "libft.h"
#include <string.h>

int main()
{
  char a[5] = "hello";
  char b[20];
  char *c = ft_memccpy(b, a, 'l', 5);
  printf("b: %s -> c: %s /n", b, c);
}
