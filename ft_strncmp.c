/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:13:57 by srusso-b          #+#    #+#             */
/*   Updated: 2025/10/26 15:13:59 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
    ft_strcmp() compares the two strings s1 and s2. It returns an integer less
	than, equal to, or greater than zero if s1 is found, respectively, 
	to be less than, to match, or be greater than s2.
	
	ft_strncmp() is similar, except it only compares the first (at most) n bytes 
	of s1 and s2.
*/

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
/*
int main()
{
	char str_a[] = "Hello World";
	char str_b[] = "Hey World";
	int i = 5;

	printf("Comparing first %d\n", i);
	printf("characters of the strings '%s'\n", str_a);
	printf("and '%s'\n", str_a);
	printf("Output: %d\n\n", ft_strncmp(str_a, str_a, i));
	printf("Comparing first %d", i);
	printf("Comparing first %d\n", i);
	printf("characters of the strings '%s'\n", str_a);
	printf("and '%s'\n", str_b);
	printf("Output: %d\n", ft_strncmp(str_a, str_b, i));
}
*/
