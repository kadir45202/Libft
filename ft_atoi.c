#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char *ptr;

	ptr = (unsigned char *)dest;
	while (n > 0)
	{
			*ptr = (unsigned char)c;
			ptr++;
			n--;
		}
	return (dest);
}
