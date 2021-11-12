#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*s;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	s = (char*)malloc(sizeof(char) * (len + 1));
	if (s == NULL)
		return (NULL);
	ft_strcpy(s, (char*)s1);
	ft_strcat(s, (char*)s2);
	return (s);
}