#include <stdlib.h>
#include "libft.h"

char *ft_strdup(const char *src)
{
  char *dest;
  size_t s_len;
  size_t i;

  s_len = ft_strlen(src);
  dest = malloc(sizeof(char) * (s_len + 1));
  if (!dest)
    return (NULL);
  i = 0;
  while (src[i])
  {
    dest[i] = src[i];
    i++;
  }
  dest[i] = '\0';
  return (dest);
}
