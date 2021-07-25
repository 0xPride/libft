#include "libft.h"

char *ft_strcat(char *dest, const char *src)
{
  size_t i;

  if (!dest && !src)
    return (dest);
  i = 0;
  while (dest[i])
    i++;
  while (*src)
  {
    dest[i] = *src;
    src++;
    i++;
  }
  dest[i] = '\0';
  return (dest);
}
