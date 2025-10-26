/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 14:58:14 by srusso-b          #+#    #+#             */
/*   Updated: 2025/10/26 15:06:30 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Man page: The calloc() function allocates memory for an array of nmemb 
 * elements of size bytes each and returns a pointer to the allocated memory */

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t	total;
	void	*ptr;

	total = nmemb * size;
	if (nmemb == 0 || size == 0)
		return (NULL);
	if (nmemb != total / size)
		return (NULL);
	ptr = malloc(total);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/*
int main()
{
	size_t	i;
	size_t	size = 5;
	char *str = ft_calloc(6, sizeof(char));
	int *array = ft_calloc(size, sizeof(int));
	
    // Test Compare with real calloc
    printf("\n=== Test: Compare with real calloc ===\n");
    void *real_ptr = calloc(3, 8);
    void *ft_ptr = ft_calloc(3, 8);

    printf("real calloc: %p\n", real_ptr);
    printf("ft_calloc : %p\n", ft_ptr);

    if (real_ptr && ft_ptr) {
        int diff = ft_memcmp(real_ptr, ft_ptr, 24);
        printf("Memory content comparison: %s\n", 
		diff == 0 ? "IDENTICAL" : "DIFFERENT");
    }
	printf("String: %p\n", str);
	i = 0;
	while (i < size)
	{
		printf("Array[%zu] = %d\n", i, array[i]);
		array[i] = i * 5;
		i++;
	}

	i = 0;
	while (i < size)
	{
		printf("Array[%zu] = %d\n", i, array[i]);
		i++;
	}
	free(array);

	array = ft_calloc(size, sizeof(int));
	i = 0;
	while (i < size)
	{
		printf("Array[%zu] = %d\n", i, array[i]);
		i++;
	}
    printf("\nAll tests completed.\n");

    free(real_ptr);
    free(ft_ptr);
    free(array);
    free(str);
}
*/
