/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:04:10 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/01 15:38:02 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Linux man page: The atoi() function converts the initial portion of the
 * string pointed to by nptr to int. */

int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;

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
		nptr++;
	}
	return (result * sign);
}
/*
int main(void)
{
	printf("ft_atoi: %d\n", ft_atoi("   \t\r\n\v\f -2147483648"));
	printf("atoi: %d\n\n", atoi("   \t\r\n\v\f -2147483648"));

	printf("ft_atoi: %d\n", ft_atoi("   \t\r\n\v\f 2147483647"));
	printf("atoi: %d\n\n", atoi("   \t\r\n\v\f 2147483647"));

	printf("ft_atoi: %d\n", ft_atoi(""));
	printf("atoi: %d\n\n", atoi(""));

	printf("ft_atoi: %d\n", ft_atoi("   \t\r\n\v\f-+42"));
	printf("atoi: %d\n\n", atoi("   \t\r\n\v\f-+42"));

	printf("ft_atoi: %d\n", ft_atoi("   \t\r\n\v\f-42 24f"));
	printf("atoi: %d\n\n", atoi("   \t\r\n\v\f-42 24f"));

	printf("ft_atoi: %d\n", ft_atoi("   \t42"));
	printf("atoi: %d\n\n", atoi("   \t42"));

    return (0);
}
*/
