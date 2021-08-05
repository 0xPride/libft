#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t i;

	if (n < 1)
	{
		i = 0;
		while (src[i])
			i++;
		return (i);
	}
	i = 0;
	if (!dest || !src)
		return (0);
	while (i <(n - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return ft_strlen(src);
}