#include <unistd.h>
#include "libft.h"

static void ft_putnbr_helper(unsigned int i, int fd)
{
  char c;
  if (i > 9)
    ft_putnbr_helper(i / 10, fd);
  c = i % 10 + '0';
  write(fd, &c, sizeof(char));
}
void ft_putnbr_fd(int i, int fd)
{
  unsigned int u_int;

  if (i == 0)
  {
    write(fd, "0", 1);
    return ;
  }
  u_int = i;
  if (i < 0)
  {
    u_int *= -1;
    write(fd, "-", sizeof(char));
  }
  ft_putnbr_helper(u_int, fd);
}
