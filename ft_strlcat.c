

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
#include <stdio.h>
int main()
{
	char str[] = "Hello World";
	unsigned long nb = 12;
	char dest[8] = "Marvin";

	printf("String: %s \n", str);
	printf("Copying %lu spots ",nb);
	printf("to destination string: %s \n",dest);
	ft_strlcat(dest, str, nb);
	printf("Output: %s\n", dest);
}
*/
