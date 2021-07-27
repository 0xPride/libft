#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#define		REG(x)		((x > 0) ? 1 : ((x < 0) ? -1 : 0))

int main () {
  char	n[40] = "2147483650";

	int		i1 = atoi(n);
	int		i2 = ft_atoi(n);
  printf("%i -> %i", i1, i2);
}
