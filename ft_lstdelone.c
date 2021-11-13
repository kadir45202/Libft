#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return NULL;
	del(lst->content);
	free(lst);
}