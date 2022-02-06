/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:34:27 by kcetin            #+#    #+#             */
/*   Updated: 2022/01/06 18:20:31 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n && *(str1 + i) == *(str2 + i))
		i++;
	if (i == n)
		return (0);
	return (*(str1 + i) - *(str2 + i));
}

// int main( void )
// {
//     const char *cp1 = "Bilgileri";
//     const char *cp2 = "Bilgileri";
//     int ret;
//     ret = ft_memcmp(cp1, cp2, 10);
//     if(ret<0) printf("cp1 bellek içeriği cp2 bellek içeriğinden küçüktür!");
//     else if(ret>0) printf("cp2 bellek içeriği cp1 bellek içeriğinden küçüktür!");
//     else printf("cp1 bellek içeriği cp2 bellek içeriğine eşittir!");
//     printf(" \n  ");  
//     ret = memcmp(cp1, cp2, 10);
//     if(ret<0) printf("cp1 bellek içeriği cp2 bellek içeriğinden küçüktür!");
//     else if(ret>0) printf("cp2 bellek içeriği cp1 bellek içeriğinden küçüktür!");
//     else printf("cp1 bellek içeriği cp2 bellek içeriğine eşittir!");
//     return 0;
// }
