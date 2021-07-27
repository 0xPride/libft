#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <bsd/string.h>

int main () {
    char	*s1 = "MZIRIBMZIRIBMZE123";
			char	*s2 = "MZIRIBMZE";
			size_t	max = strlen(s2);

			char	*i1 = strnstr(s1, s2, max);
			char	*i2 = ft_strnstr(s1, s2, max);

    printf("%s -> %s ",s1, s2);
}
