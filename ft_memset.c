/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:11:51 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/02 16:34:22 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Linux man page: The memset() function fills the first n bytes of the 
 * memory area pointed to by s with the constant byte c. */

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		ptr[i] = c;
		i++;
	}
	return (str);
}
/*
int main(void)
{
//	I can make **pointer this array of pointers, not a block of memory you can write to.

	char str[] = "Marvin Paranoid";
	char s[] = "Hello Marvin";
	char ch = 'U';
	unsigned int len = ft_strlen(str) + 1;

	ft_memset(str, ch, len);
	printf("ft_memset: %s \n", str);
 	printf("Filling with %c spots in string: %s\n", ch, (char *)ft_memset(s + 5, ch, 3));
	for(len = 0; len < ft_strlen(s); len++)
		;
	printf("All string: %s\n", s);
}
*/
