#include "libft.h"

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		sign;

	i = 0;
	sign = 1;
	if (!(str = (char *)malloc(sizeof(char) * 12)))
		return (NULL);
	if (n == -2147483648)
		return (ft_strcpy(str, "-2147483648"));
	if (n < 0)
	{
		sign = -1;
		n = -n;
	}
	while (n > 0)
	{
		str[i++] = n % 10 + '0';
		n = n / 10;
	}
	if (sign == -1)
		str[i++] = '-';
	str[i] = '\0';
	return (ft_strrev(str));
}