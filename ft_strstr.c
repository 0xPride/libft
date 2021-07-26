#include "libft.h"

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

char *ft_strstr(const char *haystack, const char *needle)
{
  size_t i;

  i = 0;
  if(*needle == '\0')
    return ((char *)haystack);
  while (haystack[i])
  {
    if (haystack[i] == *needle)
    {
      if (is_exact(&haystack[i], needle))
        return ((char *)&haystack[i]);
    }
    i++;
  }
  return (NULL);
}

