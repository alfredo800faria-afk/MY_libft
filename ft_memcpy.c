/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:11:13 by srusso-b          #+#    #+#             */
/*   Updated: 2025/10/26 15:11:16 by srusso-b         ###   ########.fr       */
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
#include <stdio.h>
int main(void)
{
	char str[] = "Hello World";
	unsigned long nbr = 3;
	char dest[8] = "Marvin";

	printf("String: %s \n", str);
	printf("Copying %lu spots\n", nbr);
	printf("to destination string: %s \n",dest);
	ft_memcpy(dest, str, nbr);
	printf("Output: %s", dest);
}
*/
