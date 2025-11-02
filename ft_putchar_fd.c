/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lis.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:09:54 by srusso-b          #+#    #+#             */
/*   Updated: 2025/11/02 16:44:25 by srusso-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Outputs the character ’c’ to the specified file descriptor.
 * c: The character to output.
 * fd: The file descriptor on which to write. */

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
/*
int main(void)
{
    char c;
	printf("Type something on terminal to test fd\n");
    while (read(0, &c, 1) == 1)  // Keep reading until EOF (Ctrl+D)
    {
        ft_putchar_fd(c, 1);     // Echo every char
        if (c == '\n')
            break;               // Optional: stop on Enter
    }
    return (0);
}
*/
