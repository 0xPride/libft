#include <stdlib.h>
#include "libft.h"

void *ft_memalloc(size_t size)
{
  void *buff;

  buff = malloc(size);
  if (!buff)
    return (NULL);
  ft_bzero(buff, size);
  return (buff);
}
