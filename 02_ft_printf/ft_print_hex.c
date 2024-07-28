/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:47:51 by katan             #+#    #+#             */
/*   Updated: 2024/07/28 15:05:17 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_hex(unsigned int n, int *count, char conversion)
{
	char	string[25];
	char	*base_character;
	int		i;

	if (conversion == 'X')
		base_character = "0123456789ABCDEF";
	else
		base_character = "0123456789abcdef";

	i = 0;

	if (n == 0)
	{
		ft_printchar('0', count);
		return ;
	}

	while (n != 0)
	{
		string[i] = base_character[n % 16];
		n = n / 16;
		i++;
	}

	while (i--)
	{
		ft_printchar(string[i], count);
	}
}
