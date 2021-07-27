#include "libft.h"
#include <stdio.h>

static int is_exact(const char *s1, const char *s2)
{
  while (*s2)
  {
    if (*s2 != *s1)
      return (0);
    s1++;
    s2++;
  }
  return (1);
}

char *ft_strnstr(const char *big, const char *little, size_t len)
{
  size_t i;

  i = 0;
  if(*little == '\0' || len == 0)
    return ((char *)big);
  while (big[i] && i < len)
  {
    if (big[i] == *little)
    {
      if (is_exact(&big[i], little))
      {
        return ((char *)&big[i]);
      }
    }
    i++;
  }
  return (NULL);
}


