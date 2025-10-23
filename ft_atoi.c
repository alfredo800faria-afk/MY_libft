

#include "libft.h"

/*Linux man page: The atoi() function converts the initial portion of the
 * string pointed to by nptr to int. */

int	ft_atoi(const char *nptr)
{
	int	neg;
	int	i;
	int	res;

	i = 0;
	res = 0;
	neg = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && nptr[i] <= 13))
		nptr++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			neg *= -1;
		nptr++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + (nptr[i] - '0');
		i++;
	}
	return (res * neg);
}
