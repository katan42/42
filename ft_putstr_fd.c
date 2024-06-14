/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 22:26:22 by katan             #+#    #+#             */
/*   Updated: 2024/06/14 15:25:39 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putstr_fd(char *s, int fd)
{
	if (s == NULL)
	{
		return;
	}
	write (fd, s, ft_strlen(s));
}
/*
int main(void)
{
	char *message = "Hello, world!";
	ft_putstr_fd(message, 1); // Writes "Hello, world!" to stdout
    return (0);
}
*/
