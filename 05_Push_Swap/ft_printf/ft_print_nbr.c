/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:47:29 by katan             #+#    #+#             */
/*   Updated: 2024/07/29 17:48:31 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int n, int *count)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*count += 11;
		return ;
	}
	else if (n < 0)
	{
		ft_printchar('-', count);
		n = -n;
	}
	if (n >= 10)
	{
		ft_print_nbr(n / 10, count);
	}
	ft_printchar((n % 10) + '0', count);
}
