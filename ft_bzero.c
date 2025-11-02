/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:05:15 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/01 16:40:38 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Linux man page: The bzero() function sets the first n bytes 
 * of the area starting at s to zero */

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*
int	main(void)
{
	char str[10] = "Marvin";
	char	s[] = "Marvin Paranoid";
	unsigned long nb = 6;
	printf("Using: ft_bzero(str + 3, 5)\n");
	printf("Original string: %s \n", str);
	ft_bzero(str + 3, 5);
	printf("After ft_bzero: '%s'\n", str);
	printf("String: %s \n Filling %lu spots with NULL '0' \n", s, nb);
	ft_bzero(s + 5, nb);
	printf("Output: %s\n", s);

	return (0);
}
*/
