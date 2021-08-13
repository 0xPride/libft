#include <stdlib.h>
#include "libft.h"

static size_t n_len(int n)
{
  size_t len;

  len = 0;
  while (n != 0)
  {
    len++;
    n /= 10;
  }
  return (len);
}

static void ft_strrev(char **str)
{
  size_t end;
  size_t start;
  char temp;

  end = ft_strlen(*str) - 1;
  start = 0;
  if (**str == '-')
    start++;
  while (start < end)
  {
    temp = (*str)[start];
    (*str)[start] = (*str)[end];
    (*str)[end] = temp;
    start++;
    end--;
  }
}
char  *ft_itoa(int n)
{
  char  *num;
  size_t num_len;
  size_t i;
  unsigned int u_int;

  u_int = n;
  if (n < 0)
  {
    u_int *= -1;
  }
  num_len = n_len(u_int);
  if (n <= 0)
    num_len++;
  num = (char *)malloc(sizeof(char) * (num_len + 1));
  if (!num)
    return (NULL);
  if (n == 0)
  {
    num[0] = '0';
    num[1] = '\0';
    return (num);
  }
  i = 0;
  if (n < 0)
  {
    num[i] = '-';
    i++;
  }
  while (u_int != 0 && i < num_len)
  {
    num[i] = (u_int % 10) + '0';
    i++;
    u_int /= 10;
  }
  num[i] = '\0';
  ft_strrev(&num);
  return (num);
}
