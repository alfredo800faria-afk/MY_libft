/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:11:13 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/02 14:08:05 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Linux man page: The memcpy() function copies n bytes from memory area src 
 * to memory area dest. The memory areas must not overlap. 
 * Use memmove(3) if the memory areas do overlap. */

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_src;
	unsigned char	*tmp_dest;

	i = 0;
	if (!dest && !src)
		return (dest);
	tmp_src = (unsigned char *)src;
	tmp_dest = (unsigned char *)dest;
	while (i < n)
	{
		tmp_dest[i] = tmp_src[i];
		i++;
	}
	return (dest);
}
/*
int main(void)
{
	char str[] = "Hello World";
	char str1[] = "Marvin";
	char buff[12];
	
	printf("ft_memcpy: %s\n", (char *)ft_memcpy(buff, str, 11));
    printf("memcpy: %s\n\n", (char *)memcpy(buff, str, 11));

	printf("ft_memcpy: %s\n", (char *)ft_memcpy(buff, str1, 7));
    printf("memcpy: %s\n\n", (char *)memcpy(buff, str1, 7));

	printf("ft_memcpy: %s\n", (char *)ft_memcpy(str, str1, 3));
    printf("memcpy: %s\n\n", (char *)memcpy(str, str1, 3));
}
*/
