#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main()
{
  t_list *list;
  int age;

  age = 21;
  list = ft_lstnew(&age);
  free(list);
}
