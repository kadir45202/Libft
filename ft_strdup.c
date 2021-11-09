nclude "libft.h"

char	*ft_strdup(const char *s)
{
	char *copy;

	copy = (char*)malloc(sizeof(*s) * (ft_strlen(s) + 1));
	if (copy)
		ft_strcpy(copy, s);
	return (copy);
}
