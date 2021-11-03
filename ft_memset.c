#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char *a;

	a = (char *)b;
	while(len > 0)
	{
		*a++ = c;
		len--;
	}
	
	return (b);
}
