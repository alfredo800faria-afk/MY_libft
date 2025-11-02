/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lis.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 09:17:20 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/02 19:03:28 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*res;
	size_t	len;
	size_t	i;

	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = f((unsigned int)i, s[i]);
		i++;
	}
	res[len] = '\0';
	return (res);
}
/* char	teste(unsigned int i, char c)
{
	if (i % 3 == 0 && i != 0)
		c = 'f';
	if (c == 'o')
		c = 'O';
	return (c);
}
int	main(void)
{
	char *s = NULL;
	char *str = ft_strmapi(s, &teste);
	int	i = 0;
	if (str == NULL)
		return (0);
	while (str[i])
	{
		printf("%c", str[i]);
		i++;
	}
	free(str);
	return (0);
} */
