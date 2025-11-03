/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lis.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:02:01 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/03 08:35:04 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	free_array(char **arr, size_t len)
{
	while (len--)
		free(arr[len]);
	free(arr);
}

size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	in_word;

	in_word = 0;
	count = 0;
	while (*s != '\0')
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c)
			in_word = 0;
		s++;
	}
	return (count);
}

char	*extract_word(const char **s, char c)
{
	size_t		len;
	const char	*start;
	char		*word;

	while (**s == c)
		(*s)++;
	start = *s;
	while (**s && **s != c)
		(*s)++;
	len = *s - start;
	word = (char *)malloc(sizeof(char) * len + 1);
	if (!word)
		return (NULL);
	ft_memcpy(word, start, len);
	word[len] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	words;
	size_t	i;

	if (!s)
		return (NULL);
	words = count_words(s, c);
	result = (char **)malloc(sizeof(char *) * (words + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < words)
	{
		result[i] = extract_word(&s, c);
		if (!result)
		{
			free_array(result, i);
			return (NULL);
		}
		i++;
	}
	result[i] = NULL;
	return (result);
}
/*
int	main(void)
{
	char	*str			= " Marvin, Android, Paranoid!";
	char	ch				= ',';
	char	**split_word	= ft_split(str, ch);
	int		i				= 0;

	if(split_word)
	{
	while (split_word[i])
	{
		printf("%s\n", split_word[i]);
		free(split_word[i]);
		i++;
	}
	free(split_word);
	}
	return (0);
}
*/
