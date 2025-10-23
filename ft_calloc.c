

#include "libft.h"

/*	Man page: ft_calloc() — Allocates the space for elements of an array.
	Initializes the elements to zero and returns a pointer to the memory. */

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, (nmemb * size));
	return (ptr);
}
/*
int main()
{
	char *str_a = ft_calloc(6, sizeof(char));
	char *str_b = ft_calloc(1000, sizeof(char));
	
	printf("String A: %p\n", str_a);
	printf("String B: %p\n", str_b);
}
*/
