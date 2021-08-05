#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>
#define		REG(x)		((x > 0) ? 1 : ((x < 0) ? -1 : 0))

int main () {
	char n[40] = "2147483650";
 	int len = ft_strlen(n);
	printf("%i\n", len); 
}
