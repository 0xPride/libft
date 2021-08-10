#include <stdlib.h>
#include "libft.h"

static int ft_includes(const char *str, char c)
{
  while (*str)
  {
    if (*str == c)
      return (1);
    str++;
  }
  return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
  size_t start;
  size_t end;
  char   *trim;
  size_t i;

  if (!s1)
    return (NULL);
  if (!set)
    return (ft_strdup(s1));
  start = 0;
  end = ft_strlen(s1) - 1;
  while (ft_includes(set, s1[end]))
    end--;
  while (ft_includes(set, s1[start]))
    start++;
  if (start >= end)
    return (ft_strdup(""));
  trim = (char *)malloc(sizeof(char) * (end - start + 2));
  if (!trim)
    return (NULL);
  i = 0;
  while (start <= end)
  {
    trim[i] = s1[start];
    i++;
    start++;
  }
  trim[i] = '\0';
  return (trim);
}
