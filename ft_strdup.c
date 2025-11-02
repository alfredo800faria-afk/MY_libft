/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 11:27:10 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/02 18:38:02 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*	The strdup() function returns a pointer to a new string which is a
    duplicate of the string s.  Memory for the new string is obtained
    with malloc(3), and can be freed with free(3). */

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	i;
	size_t	size;

	if (s == NULL)
		return (NULL);
	size = ft_strlen(s);
	dup = (char *)malloc(sizeof(char) * (size + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (s[i])
	{
		dup[i] = s[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
/*
int	main(void)
{
	char	*s = "Android!";
	char	*s1 = "Marvin Android!";
	char	*s2;

	s2 = ft_strdup(s1);
	s = strdup(s1);
	printf("Original strdup: %s\nMy ft_strdup: %s\n", s, s2);
	free(s2);
	free(s);

	return (0);
}
*/
