#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
  unsigned char *u_s1;
  unsigned char *u_s2;

  u_s1 = (unsigned char *)s1;
  u_s2 = (unsigned char *)s2;
  while ((*u_s1 || *u_s2) && n > 0)
  {
    if (*u_s1 != *u_s2)
      return (*u_s1 - *u_s2);
    u_s1++;
    u_s2++;
    n--;
  }
  if (n == 0)
    return (0);
  return (*u_s1 - *u_s2);
}
