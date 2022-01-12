/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 13:35:14 by kcetin            #+#    #+#             */
/*   Updated: 2022/01/06 18:23:48 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_is_inset(char const *set, char c)
{
	while (*set)
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	int		i;
	int		j;
	int		k;

	i = 0;
	k = 0;
	while (ft_is_inset(set, s1[i]) == 1)
		i++;
	j = ft_strlen(s1 + i);
	while (ft_is_inset(set, s1[j + i - 1]) == 1 && s1[i])
		j--;
	str_trim = (char *)malloc(sizeof(char) * (j + 1));
	if (!(str_trim))
		return (0);
	while (k < j)
	{
		str_trim[k] = s1[i + k];
		k++;
	}
	str_trim[j] = '\0';
	return (str_trim);
}
