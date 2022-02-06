/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:34:24 by kcetin            #+#    #+#             */
/*   Updated: 2022/01/06 18:20:31 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned char *)s + i) == (unsigned char)c)
			return ((unsigned char *)s + i);
		i++;
	}
	return (NULL);
}

// int main( void )
// {
//     const char *cp = "Bilgisayar";
//     const char cd = 'g';

// printf("%c karakterinin bellek adresi: %p\n", cd, memchr(cp, cd, strlen(cp)));
// printf("%c karakterinin bellek adresi: %p\n", cd, ft_memchr(cp, cd, strlen(cp)));

//     return 0;
// }
