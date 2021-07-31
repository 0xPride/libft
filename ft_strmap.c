#include <stdlib.h>
#include "libft.h"

char *ft_strmap(char const *s, char (*f)(char))
{
  char    *str;
  size_t  s_len;
  size_t  i;

  if (!s)
    return (NULL);
  s_len = ft_strlen(s);
  str = (char *)malloc(sizeof(char) * (s_len + 1));
  if (!str)
    return (NULL);
  i = 0;
  while (i < s_len)
  {
    str[i] = f(s[i]);
    i++;
  }
  str[i] = '\0';
  return (str);
}
