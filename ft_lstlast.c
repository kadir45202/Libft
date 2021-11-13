#include "libft.h"

t_list ft_lstlast(t_list **alst)
{
    t_list *tmp;

    tmp = *alst;
    if (tmp)
    {
    while (tmp->next != NULL)
        tmp = tmp->next;
    return (tmp);
    }
}