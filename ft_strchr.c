

#include "libft.h"

/*Man page: The strchr() function returns a pointer to the first occurrence 
 * of the character c in the string s. */

char	*ft_strchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (NULL);
	while (str[i])
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	else
		return (NULL);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char str[] = "Hello World";
	char char_a = 'o';
	char char_b = 'c';

	printf("Search for character '%c' in string '%s'\n", char_a, str);
	printf("Output: '%s'\n", ft_strchr(str, char_a));

	printf("Search for character '%c' in string '%s'\n", char_b, str);
	printf("Output: '%s'\n", ft_strchr(str, char_b));
}
*/
