#include <stdlib.h>
#include "libft.h"

void *ft_calloc(size_t nmemb, size_t size)
{
  char *buff;
  size_t len;
  size_t i;

  len = nmemb * size;
  if (len == 0)
    return (NULL);
  buff = (char *)malloc(len);
  if (!buff)
    return (NULL);
  i = 0;
  while (i < len)
  {
    buff[i] = 0;
    i++;
  }
  return (buff);
}
