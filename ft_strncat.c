#include "libft.h"

char *ft_strlcat(char *dest, const char *src, size_t n)
{
  size_t i;

  i = 0;
  if (n == 0 || !src)
    return (dest);
  while (dest[i])
    i++;
  while (i < n - 1 && src)
  {
    dest[i] = *src;
    if (*src)
      src++;
    i++;
  }
  dest[i] = '\0';
  return (dest);
}
