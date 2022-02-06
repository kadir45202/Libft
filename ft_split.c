/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kcetin <kcetin@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 14:41:30 by kcetin            #+#    #+#             */
/*   Updated: 2022/01/17 14:41:33 by kcetin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	if (s[i] == c || s[0] == '\0')
		count--;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			count++;
		i++;
	}
	return (count + 1);
}

static int	ft_strlen_c(const char	*s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	*ft_free_all(char **res, int i)
{
	while (i--)
		free(res[i]);
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		i;
	int		countwords;

	if (!s)
		return (NULL);
	i = 0;
	countwords = ft_count_words(s, c);
	res = malloc(sizeof(char *) * (countwords + 1));
	if (!res)
		return (NULL);
	i = 0;
	while (i < countwords)
	{
		while (*s == c && *s)
			s++;
		res[i] = ft_substr(s, 0, ft_strlen_c(s, c));
		if (res[i] == NULL)
			return (ft_free_all(res, i));
		s += ft_strlen_c(s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
/*
#include <stdio.h>
#include <stdlib.h>
int main()
{
        int i = 0;
        char **a;
        a = ft_split("marhaba.selamlar.mmm", '.');
        printf("%s\n",a[0]);
        printf("%s\n",a[1]);
        printf("%s",a[2]);
        

}*/
