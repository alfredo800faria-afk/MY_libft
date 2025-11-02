/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lis.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:50:18 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/02 18:49:01 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Applies the function ’f’ to each character of the string passed as argument,
 * passing its index as the first argument. Each character is passed by address
 * to ’f’ so it can be modified if necessary.
 * s: The string to iterate over.
 * f: The function to apply to each character. */

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;
	size_t	len;

	if (!s || !f)
		return ;
	len = ft_strlen(s);
	i = 0;
	while (i < len)
	{
		f((unsigned int)i, &s[i]);
		i++;
	}
}
/* void	teste(unsigned int i, char	*ptr)
{
	if (!ptr)
		return;
	if (i % 3 == 0 && i != 0)
		*ptr = 'f';
	if (*ptr == 'o')
		*ptr = 'O';
}

//Output: MarfinfPafanfidf

int	main(void)
{
	char	s[] = "Marvin Paranoid!";
	ft_striteri(s, &teste);
	printf("%s", s);
	return (0);
} */
