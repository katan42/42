/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:47:29 by katan             #+#    #+#             */
/*   Updated: 2024/07/21 17:42:22 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_print_nbr(int n, int *count)
{
	if (n < 10)
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

