/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:10:16 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/01 19:43:42 by srusso-b         ###   ########.fr       */
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
int	main(void)
{
	const char s[] = "Marvin Paranoid!";;

	printf("ft_memchr: %s\n", (char *)ft_memchr(s, 'i', 5));
	printf("memchr: %s\n\n", (char *)memchr(s, 'i', 5));

	printf("ft_memchr: %s\n", (char *)ft_memchr(s, 'P', 10));
	printf("memchr: %s\n\n", (char *)memchr(s, 'P', 10));

	printf("ft_memchr: %s\n", (char *)ft_memchr(s, 'r', 3));
	printf("memchr: %s\n\n", (char *)memchr(s, 'r', 3));

	printf("ft_memchr: %s\n", (char *)ft_memchr(s, 101, 2));
	printf("memchr: %s\n", (char *)memchr(s, 101, 2));

	return (0);
}
*/
