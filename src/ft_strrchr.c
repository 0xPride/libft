#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
  int s_len;
  
  s_len = (int)ft_strlen(s);
  while (s_len >= 0)
  {
    if (s[s_len] == c)
      return (char *)&s[s_len];
    s_len--;
  }
  return (NULL);
}
