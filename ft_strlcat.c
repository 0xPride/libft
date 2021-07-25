#include "libft.h"

size_t ft_strlcat(char *dest, const char *src, size_t size)
{
  size_t d_len;
  size_t s_len;
  size_t i;

  d_len = ft_strlen(dest);
  s_len = ft_strlen(src);
  if (size <= d_len || size == 0)
    return (size + s_len);
  i = 0;
  while (i < size - 1 && src[i])
  {
    dest[d_len + i] = src[i];
    i++;
  }
  dest[d_len + i] = '\0';
  return (d_len + s_len);
}
