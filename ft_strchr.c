/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:12:12 by srusso-b          #+#    #+#             */
/*   Updated: 2025/10/26 18:06:24 by srusso-b         ###   ########.fr       */
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
#include <stdio.h>

int main()
{
    char *str = "Hello, Marvin!";

    printf("%s\n", ft_strchr(str, 'o'));     // "o, Marvin!"
    printf("%s\n", ft_strchr(str, 'z'));     // (null)
    printf("%s\n", ft_strchr(str, '\0'));    // "" End string
    printf("%s\n", ft_strchr(str, 'H'));     // "Hello, Marvin!"
    return 0;
}
*/
