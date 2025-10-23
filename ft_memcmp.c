/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lis.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:23:08 by srusso-b          #+#    #+#             */
/*   Updated: 2025/10/23 12:57:09 by srusso-b         ###   ########.fr       */
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
int main()
{
	char str_a[] = "Hello World";
	char str_b[] = "Hey World";
	int i = 5;

	printf("Comparing first %d  \n", i);
	printf("characters of the strings '%s'\n", str_a);
	printf("and '%s'\n", str_a);
	printf("Output: %d\n\n", ft_memcmp(str_a, str_a, 5));
	printf("Comparing first %d  \n", i);
	printf("characters of the strings '%s'\n", str_a);
	printf("and '%s'\n", str_b);
	printf("Output: %d\n", ft_memcmp(str_a, str_b, 5));
}
*/
