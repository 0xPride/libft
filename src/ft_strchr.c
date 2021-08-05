#include "libft.h"

char *ft_strchr(const char  *s, int c)
{
  size_t s_len;
  size_t i;

  s_len = ft_strlen(s);
  i = 0;
  while (i <= s_len)
  {
    if (s[i] == c)
      return (char *)&s[i];
    i++;
  }
  return (NULL);
}
