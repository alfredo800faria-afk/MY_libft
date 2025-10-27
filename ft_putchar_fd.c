/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: srusso-b <srusso-b@student.42lis.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:09:54 by srusso-b          #+#    #+#             */
/*   Updated: 2025/10/27 17:31:43 by srusso-b         ###   ########.fr       */
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
