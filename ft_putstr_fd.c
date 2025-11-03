/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lis.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 17:35:41 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/03 12:45:04 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
 * Escreva um programa, que receba 2 argumentos,
 * arg1 - o arquivo a ser criado e escrito
 * arg2 - a string a ser escrita 
 * */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s || fd < 0)
		return ;
	while (*s)
		write(fd, s++, 1);
}
/*
int	main(int argc, char *argv[])
{
	if (argc > 1)
	{
		//char	*s = "Marvin Paranoid!\n";
		int fd;
		fd = open(argv[1], O_CREAT | O_RDWR, 0644);
		printf("Return open: %i\n", fd);
		ft_putstr_fd(argv[2], fd);
		close(fd);

	}

	return (0);
}
*/
