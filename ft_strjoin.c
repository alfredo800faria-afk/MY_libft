/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 15:25:51 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/02 19:01:38 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Goal: Concatenate str1 + str2 into a new allocated string, 
 * and return the pointer. */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*join;
	size_t	len1;
	size_t	size;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	len1 = ft_strlen(s1);
	size = ft_strlen(s2) + len1;
	join = (char *)malloc(sizeof(char) * size + 1);
	if (join == NULL)
		return (NULL);
	ft_strlcpy(join, s1, len1 + 1);
	ft_strlcat(join, s2, size + 1);
	return (join);
}
/*
int	main(void)
{
	char	*s;
	char	s1[] = "Android Paranoid!";

	s = ft_strjoin("Marvin ", s1);
	printf("String join: %s\n", s);
	free(s);
	s = ft_strjoin("", s1);
	printf("String2 join: %s\n", s);
	free(s);
	s = ft_strjoin("Give null", NULL);
	printf("String3 join: %s\n", s);
	free(s);

	return (0);
}
*/
