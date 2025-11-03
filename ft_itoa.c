/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:07:36 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/03 08:19:22 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convert an int integer to an allocated string */

static int	get_size(int n)
{
	int	size;

	size = 0;
	if (n <= 0)
		size++;
	while (n > 0)
	{
		n = n / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int n)
{
	int		size;
	char	*str;
	long	nb;

	size = get_size(n);
	str = malloc(sizeof(char) * (size + 1));
	nb = n;
	if (!str)
		return (NULL);
	str[size] = '\0';
	if (nb == 0)
		str[0] = '0';
	if (nb < 0)
	{
		str[0] = '-';
		nb = -nb;
	}
	while (nb > 0)
	{
		str[--size] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
/*
int main (void)
{
	int	s[5] =
	{
		-123456, -2147483648, 2147483647, 42, 0 
	};
	printf("Number [ %d ] : %s\n", s[0], ft_itoa(s[0]));
	printf("Number [ %d ] : %s\n", s[1], ft_itoa(s[1]));
	printf("Number [ %d ] : %s\n", s[2], ft_itoa(s[2]));
	printf("Number [ %d ] 		: %s\n", s[3], ft_itoa(s[3]));
	printf("Number [ %d ] 		: %s\n", s[4], ft_itoa(s[4]));

	return (0);
}
*/
