#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int pos;

	pos = ft_strlen(s);
	if (s)
	{
		while (s[pos] != (char)c && pos >= 0)
			pos--;
		if (s[pos] == (char)c)
			return ((char*)&s[pos]);
		else
			return (NULL);
	}
	return (NULL);
}