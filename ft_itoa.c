/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:07:36 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/01 17:54:52 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Convert an int integer to an allocated string */

static size_t	count_digits(long n)
{
	size_t	count;

	count = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		count++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

static void	fill_str(char *str, long nb, size_t len, int neg)
{
	str[len] = '\0';
	if (neg)
		str[0] = '-';
	if (nb == 0)
		str[0] = '0';
	while (nb > 0)
	{
		len--;
		str[len] = (nb % 10) + '0';
		nb = nb / 10;
	}
}

char	*ft_itoa(int n)
{
	char	*res;
	size_t	len;
	long	nb;
	int		neg;

	nb = n;
	neg = 0;
	if (nb < 0)
	{
		neg = 1;
		nb = -nb;
	}
	len = count_digits(nb);
	if (neg)
		len++;
	res = (char *)malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	fill_str(res, nb, len, neg);
	return (res);
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
