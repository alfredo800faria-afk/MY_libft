/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:12:12 by srusso-b          #+#    #+#             */
/*   Updated: 2025/10/26 18:24:17 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Man page: The strchr() function returns a pointer to the first occurrence 
 * of the character c in the string s. */

char	*ft_strchr(const char *str, int c)
{
	char	ch;

	ch = (char)c;
	while (*str != '\0')
	{
		if (*str == ch)
			return ((char *)str);
		str++;
	}
	if (ch == '\0')
		return ((char *)str);
	return (NULL);
}
/*
int main(void)
{
    const char *s = "Hello, Marvin!";

    printf("Test 1: %s\n", ft_strchr(s, 'o'));     // "o, Marvin!"
    printf("Test 2: %s\n", ft_strchr(s, 'z'));     // (null)
    printf("Test 3: %s\n", ft_strchr(s, '\0'));    // (empty line)
    printf("Test 4: %s\n", ft_strchr(s, 'H'));     // "Hello, Marvin!

    return (0);
}
*/
