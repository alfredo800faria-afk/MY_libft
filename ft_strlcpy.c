/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:13:08 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/03 12:45:47 by srusso-b         ###   ########.fr       */
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
int main(void)
{
	char str[] = "Android Paranoid!";
	char str1[] = "Marvin";
	size_t	len = ft_strlen(str) + ft_strlen(str1) + 1;

	printf("String 1: %s\nString 2: %s\n", str, str1);
	printf("Lenght: %zu\n", ft_strlcpy(str1, str, len));
	printf("Final string: %s\n",str);

	return (0);
}
*/
