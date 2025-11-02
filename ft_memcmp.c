/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:10:48 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/02 13:44:32 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Linus man: The memcmp() function compares the first n bytes (
 * each interpreted as unsigned char) of the memory areas s1  and s2. */

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) str1[i] != (unsigned char) str2[i])
			return ((unsigned char) str1[i] - (unsigned char) str2[i]);
		i++;
	}
	return (0);
}
/*
int main(void)
{
	char *s[] = { "Marvin", "Hey Marvin",""};

	printf("ft_memcmp: %d\n", ft_memcmp(s[0], s[0], 6));
    printf("memcmp: %d\n\n", ft_memcmp(s[0], s[0], 6));

	printf("ft_memcmp: %d\n", ft_memcmp(s[0] + 3, s[1] + 7, 4));
	printf("memcmp: %d\n\n", ft_memcmp(s[0] + 3, s[1] + 7, 4));

	printf("ft_memcmp: %d\n", ft_memcmp(s[0], s[1], 11));
	printf("memcmp: %d\n\n", ft_memcmp(s[0], s[1], 11));

	printf("ft_memcmp: %d\n", ft_memcmp(s[1], s[1], 0));
	printf("memcmp: %d\n\n", ft_memcmp(s[1], s[1], 0));

	printf("ft_memcmp: %d\n", ft_memcmp(s[2], s[2], 1));
	printf("memcmp: %d\n", ft_memcmp(s[2], s[2], 1));

	return (0);
}
*/
