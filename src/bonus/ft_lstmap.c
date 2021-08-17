#include <stdlib.h>
#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
  t_list *new_list;
  t_list *ele;

  if (!f || !del)
    return (NULL);
  while (lst)
  {
    ele = ft_lstnew(f(lst->content));
    if (!ele)
    {
      ft_lstclear(&new_list, del);
      return (NULL);
    }
    ft_lstadd_back(&new_list, ele);
    lst = lst->next;
  }
  return (new_list);
}
