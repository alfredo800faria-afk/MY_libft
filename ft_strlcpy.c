/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:13:08 by srusso-b          #+#    #+#             */
/*   Updated: 2025/10/26 15:13:11 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Man page: ft_strlcpy() copies up to size - 1 characters from the 
 * NUL-terminated string src to dst, NUL-terminating the result. */

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(src);
	if (size == 0)
		return (len);
	while (src[i] != '\0' && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
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
	printf("to destination string: %s \n",dest);
	ft_strlcpy(dest, str, nb);
	printf("Output: %s", dest);
}
*/
