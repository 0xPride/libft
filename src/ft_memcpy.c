#include "libft.h"


void *ft_memcpy(void *dest, const void *src, size_t n)
{
  unsigned char *s1;
  unsigned char *s2;

  s1 = (unsigned char *)dest;
  s2 = (unsigned char *)src;
  if(!n || dest == src)
    return (dest);
  while(n)
  {
    *s1 = *s2;
    s1++;
    s2++;
    n--;
  }
  return (dest);
}
