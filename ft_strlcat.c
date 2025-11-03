/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:12:40 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/03 09:06:55 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*  The strlcat() function appends the NUL-terminated string src to the end 
 *  of dst.  It will append at most size - strlen(dst) - 1 bytes, 
 *  NUL-terminating the result. */

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	src_len;
	size_t	i;

	i = 0;
	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (dest_len >= size)
		return (size + src_len);
	while (src[i] && (dest_len + i + 1) < size)
	{
		dest[dest_len + i] = src[i];
		i++;
	}
	dest[dest_len + i] = '\0';
	return (dest_len + src_len);
}
/*
int main(void)
{
	char str[] = "Marvin Android-";
	char str1[] = "Paranoid";
	size_t	len = ft_strlen(str) + ft_strlen(str1) + 1;

	printf("Str 1: %s\nStr 2: %s\n", str, str1);
	printf("Lenght: %zu\n",ft_strlcat(str, str1, len));
	printf("String Concat: %s\n", str);

	return (0);
}
*/
