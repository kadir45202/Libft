#include "libft.h"

int	ft_atoi(const char *nptr)
{
	long	i;
	long	nbr;
	int		isneg;

	i = 0;
	nbr = 0;
	isneg = 0;
	while (nptr[i] != '\0' && (nptr[i] == 32 || nptr[i] == '\t' || nptr[i] == '\n'
			|| nptr[i] == '\r' || nptr[i] == '\v' || nptr[i] == '\f'))
		i++;
	if (nptr[i] != '\0' && nptr[i] == '-')
	{
		isneg = 1;
		i++;
	}
	else if (nptr[i] == '+')
		i++;
	while (nptr[i] != '\0' && ft_isdigit(nptr[i]))
		nbr = (nbr * 10) + (nptr[i++] - '0');
	if (isneg == 1)
		return (-nbr);
	return (nbr);
}