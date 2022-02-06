/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:35:12 by kcetin            #+#    #+#             */
/*   Updated: 2022/01/06 19:15:00 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while (haystack[i] != 0 && i < len)
	{
		j = 0;
		while (haystack[i + j] == needle[j] && needle[j] != 0 && j + i < len)
			j++;
		if (j == ft_strlen(needle))
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
//     const char *cp1 = "Bilgisayar";
//     const char *cp2 = "ilgi";
//     char *ret = strnstr(cp1, cp2,10);
//     char *ret1 = ft_strnstr(cp1, cp2,10);
//    printf("%ld \n",ret - cp1);
//     printf("%s \n",ret1);
//     return 0;
// }
