#include "libft.h"

static char *skip_isspaces(const char *str)
{
  while (*str == ' ' || *str == '\t' || *str == '\n'
      || *str == '\f' || *str == '\v' || *str == '\r')
      str++;
  return (char *)(str);
}

int ft_atoi(const char *nptr)
{
  int result;
  int sign;
  int i;

  if (!nptr)
    return (0);
  sign = 0;
  i = 0;
  nptr = skip_isspaces(nptr);
  while (nptr[i] == '-' || nptr[i] == '+')
  {
    if (nptr[i] == '-')
      sign ++;
    i++;
  }
  if (!(nptr[i] >= '0' && nptr[i] <= '9'))
    return (0);
  result = 0;
  while (nptr[i] >= '0' && nptr[i] <= '9')
  {
    result = result * 10 + (nptr[i] - '0');
    i++;
  }
  if (sign % 2 != 0)
  {
    return (-result);
  };

  return (result);
}
