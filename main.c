#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <bsd/string.h>
#define		REG(x)		((x > 0) ? 1 : ((x < 0) ? -1 : 0))

int main () {
    char	*big = "abcdef";
			char	*little = "abcdefghijklmnop";
			size_t	size = 6;

			int		i1 = REG(strncmp(big, little, size));
			int		i2 = REG(ft_strncmp(big, little, size));

    printf("%i -> %i ",i1, i2);
}
