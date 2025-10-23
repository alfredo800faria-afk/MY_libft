/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lis.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 12:09:46 by srusso-b          #+#    #+#             */
/*   Updated: 2025/10/23 12:16:39 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Linus man page: The memchr() function scans the initial n bytes of the 
 * memory area pointed to by s for the first instance of c. Both c and the 
 * bytes of the memory area pointed to by s are interpreted as unsigned char */

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (ptr[i] == (unsigned char)c)
			return ((void *)(ptr + i));
		i++;
	}
	return (0);
}
/*
int main()
{
	char str[] = "Hello World";
	char ch_a = 'o';
	char ch_b = 'c';
	int i = 5;

	printf("Search for character '%c'\n", ch_a);
	printf("in the first %d\n", i);
	printf("characters of the string '%s'\n", str);
	printf("Output: '%p'\n\n", ft_memchr(str, ch_a, i));

	printf("Search for character '%c'\n", ch_b);
	printf("in the first %d\n", i);
	printf("characters of the string '%s'\n", str);
	printf("Output: '%p'\n", ft_memchr(str, ch_b, i));
}
*/
