#include "libft.h"

char *ft_strncpy(char *dest, const char *src, size_t n)
{
  size_t i;

  i = 0;
  if (n == 0)
    return (dest);
  while (n--)
  {
    dest[i] = *src;
    if(*src)
      src++;
    i++;
  }
  return (dest);
}
