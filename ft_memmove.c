/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lis.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 16:36:23 by srusso-b          #+#    #+#             */
/*   Updated: 2025/10/22 16:54:05 by srusso-b         ###   ########.fr       */
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
#include <stdio.h>
int main(void)
{
	char str[] = "Hello World";
	unsigned long nb = 3;
	char dest[8] = "Marvin";

	printf("String: %s \n", str);
	printf("Copying %lu spots\n",nb);
	printf("to destination string: %s\n",dest);
	ft_memmove(dest, str, nb);
	printf("Output: %s", dest);
}
*/
