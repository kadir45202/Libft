#include "libft.h"

char    *strncat(char *dest, const char *src, size_t n);
{
	int i = 0;
	int j = 0;
	
	i = ft_strlen(dest);
	
	while(src && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	
	dest[i] = '\0';
	
	return (dest);
}