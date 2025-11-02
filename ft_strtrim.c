/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/26 16:44:53 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/01 15:35:08 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;
	len = end - start;
	return (ft_substr(s1, (unsigned int)start, len));
}
/*
int	main(void)
{
	char *s;

	s = ft_strtrim("Android Marvin!", "in!");
	printf("ft_strtrim: %s\n", s);
	free (s);
	s = ft_strtrim("\\tMarvin Paranoid\\t", "\\t");
	printf("ft_strtrim: %s\n", s);
	free (s);
	s = ft_strtrim("...Android..Paranoid..", "..");
	printf("ft_strtrim: %s\n", s);
	free (s);
	s = ft_strtrim("Marvin", NULL);
	printf("ft_strtrim: %s\n", s);
	free (s);
	s = ft_strtrim(NULL, "Marvin");
	printf("ft_strtrim: %s\n", s);
	free (s);

	return (0);
}
*/
