#include <stdlib.h>
#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
  unsigned int i;
  unsigned int s_len;
  char *str;

  s_len = ft_strlen(s);
  str = (char *)malloc(sizeof(char) * (s_len + 1));
  if (!str)
    return (NULL);
  i = 0;
  while (i < s_len)
  {
    str[i] = f(i, s[i]);
    i++;
  }
  return (str);
}
