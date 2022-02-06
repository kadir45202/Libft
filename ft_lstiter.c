/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:34:10 by kcetin            #+#    #+#             */
/*   Updated: 2022/01/09 16:21:06 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
void ft_putstr(char *str)
{
	while(*str)
	write(1, str++, 1);
}
int main ()

{
	t_list *a;
	a = NULL;
	ft_lstadd_back(&a, ft_lstnew("hello "));
	ft_lstadd_back(&a, ft_lstnew("world"));
	ft_lstiter(a, (void (*)(void *))ft_putstr);
}
*/
