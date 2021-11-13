#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list *tmp;

    if (!lst || !new)
        return NULL;
    tmp = *lst;
    if (!tmp)
    {
        *lst = new;
        return NULL;
    }
    while (tmp->next)
        tmp = tmp->next;
    tmp->next = new;
}