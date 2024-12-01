/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:47:23 by katan             #+#    #+#             */
/*   Updated: 2024/07/29 17:49:41 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_ptr(size_t ptr, int *count)
{
	char	str[25];
	char	*base_char;
	int		i;

	if (ptr == 0)
	{
		ft_printstr("(nil)", count);
		return ;
	}
	i = 0;
	base_char = "0123456789abcdef";
	write(1, "0x", 2);
	(*count) += 2;
	while (ptr != 0)
	{
		str[i] = base_char[ptr % 16];
		ptr /= 16;
		i++;
	}
	while (i--)
		ft_printchar(str[i], count);
}	
