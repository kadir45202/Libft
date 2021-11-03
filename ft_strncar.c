#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char *original;

	original = s1;
	s1 = &s1[ft_strlen(s1)];
	while (*s2 != 0 && n > 0)
	{
		*s1++ = *s2++;
		n--;
	}
	*s1 = 0;
	return (original);
}