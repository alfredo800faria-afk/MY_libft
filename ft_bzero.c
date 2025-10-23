/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lis.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 12:59:58 by srusso-b          #+#    #+#             */
/*   Updated: 2025/10/22 16:19:27 by srusso-b         ###   ########.fr       */
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
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World";
	unsigned long num = 6;

	printf("String: %s \n Filling %lu spots with NULL '0' \n", str, num);
	ft_bzero(str, num);
	printf("Ouput: %s", str);
	return (0);
}
*/
