/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:14:36 by srusso-b          #+#    #+#             */
/*   Updated: 2025/10/26 15:14:38 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Linux man page: The strchr() function returns a pointer to the first 
 * occurrence of the character c in the string s. */

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = ft_strlen(str);
	if (!str)
		return (NULL);
	while (i + 1 > 0)
	{
		if (str[i] == (char)c)
			return ((char *)&str[i]);
		i--;
	}
	if (c == '\0')
		return ((char *)&str[i]);
	return (0);
}

/*
int main()
{
	char str[] = "Hello World";
	char char_a = 'o';
	char char_b = 'c';

	printf("Search for character '%c' in string '%s'\n", char_a, str);
	printf("Output: '%s'\n", ft_strrchr(str, char_a));

	printf("Search for character '%c' in string '%s'\n", char_b, str);
	printf("Output: '%s'\n", ft_strrchr(str, char_b));
}
*/
