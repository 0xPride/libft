#include <stdlib.h>
#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
  char *str;
  unsigned int i;

  if (!s1 && !s2)
    return (NULL);
  str = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
  if (!str)
    return (NULL);
  i = 0;
  while (*s1)
  {
    str[i] = *s1;
    i++;
    s1++;
  }
  while (*s2)
  {
    str[i] = *s2;
    i++;
    s2++;
  }
  str[i] = '\0';
  return (str);
}
