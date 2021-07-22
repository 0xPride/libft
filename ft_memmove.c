#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
  size_t i;

  if (!dest && !src)
    return (NULL);
  if (dest > src)
  {
    while (n > 0)
    {
      ((char *)dest)[n - 1] = ((char *)src)[n - 1];
      n--;
    }
    return (dest);
  }
  i = 0;
  while (i <= n)
  {
    ((char *)dest)[i] = ((char *)src)[i];
    i++;
  }
  return (dest);
}
