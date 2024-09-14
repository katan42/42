/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:47:08 by katan             #+#    #+#             */
/*   Updated: 2024/07/29 19:05:31 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printstr(char *s, int *count)
{
	if (s == NULL)
	{
		write(1, "(null)", 6);
		(*count) += 6;
		return ;
	}
	while (*s)
	{
		ft_printchar(*s, count);
		s++;
	}
}
