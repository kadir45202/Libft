/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:33:39 by kcetin            #+#    #+#             */
/*   Updated: 2022/01/04 16:11:08 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

// int main(void)
// {
//     int *a;
//     int  b;
//     a = (int *) ft_calloc(10, sizeof(int));
//     for (b=0; b<10; b++) {
//          *(a+b) = (b+1) * 5;
//          printf("%p adresindeki değer: %d\n", (a+b), *(a+b));
//     }
//     free(a);
// }
