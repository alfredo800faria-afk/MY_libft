

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
#include <stdio.h>
int main()
{
	char str1[] = "Hello World";
	char carac1 = 'A';
	unsigned long num1 = 6;

	printf("String: %s \n", str1);
	printf("Filling %lu spots\n", num1);
	printf("with character '%c' \n",carac1);
	ft_memset(str1, carac1, num1);
	printf("Output: %s", str1);
}
*/
