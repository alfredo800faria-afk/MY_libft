/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:04:10 by srusso-b          #+#    #+#             */
/*   Updated: 2025/10/30 20:00:33 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Linux man page: The atoi() function converts the initial portion of the
 * string pointed to by nptr to int. */

static int	check_overflow(long result, int sign)
{
	if (sign == 1 && result > 2147483647)
		return (2147483647);
	if (sign == -1 && result < -2147483648)
		return (-2147483648);
	return (result);
}

int	ft_atoi(const char *nptr)
{
	long	result;
	int		sign;

	result = 0;
	sign = 1;
	while (*nptr == ' ' || (*nptr >= '\t' && *nptr <= '\r'))
		nptr++;
	if (*nptr == '-' || *nptr == '+')
	{
		if (*nptr == '-')
			sign = -1;
		nptr++;
	}
	while (*nptr >= '0' && *nptr <= '9')
	{
		result = result * 10 + (*nptr - '0');
		result = check_overflow(result, sign);
		nptr++;
	}
	return ((int)(result * sign));
}
