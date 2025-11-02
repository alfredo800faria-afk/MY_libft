/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:11:31 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/02 15:20:18 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Linux man page: The memmove() function copies n bytes from memory area src 
 * to memory area dest. he memory areas may overlap: copying takes place as 
 * though the bytes in src are first copied into a temporary array that does 
 * not overlap src or dest, and the bytes are then copied from the temporary 
 * array to dest. */

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmp_dest;
	unsigned char	*tmp_src;

	tmp_dest = (unsigned char *)dest;
	tmp_src = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	if (dest == src || n == 0)
		return (dest);
	i = 0;
	if (tmp_dest > tmp_src)
		while (n-- > 0)
			tmp_dest[n] = tmp_src[n];
	else
		while (i++ < n)
			tmp_dest[i - 1] = tmp_src[i - 1];
	return (dest);
}
/*
int main(void)
{
	char str[] = "Hello World";
	char dest[] = "Marvin";

	ft_memmove(str + 5, dest, 6);
	printf("ft_memmove: %s \n", str);
	ft_memmove(dest + 3, str + 3, 2);
	printf("ft_memmove: %s\n",dest);
}
*/
