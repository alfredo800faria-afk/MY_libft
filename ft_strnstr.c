

#include "libft.h"

/* 
	ft_strnstr() Find the first substring in a length-limited string
	big:	The string to be searched
	little:	The string to search for
	len:	the maximum number of characters to search
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *) big);
	while ((big[i] != '\0') && i < len)
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			if (little[j + 1] == '\0')
				return ((char *)big + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main()
{
	char str_a[] = "Hello World!";
	char str_b[] = "World";
	int i = 11;
	int j = 5;
	
	printf("Finding '%s' in '%s' within the first %d characters\n", 
			str_b, str_a, i);
	printf("Output: '%s'\n", ft_strnstr(str_a, str_b, i));

	printf("Finding '%s' in '%s' within the first %d characters\n",
			 str_b, str_a, j);
	printf("Output: '%s'\n", ft_strnstr(str_a, str_b, j));
}
*/
