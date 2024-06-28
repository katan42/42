/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 15:37:51 by katan             #+#    #+#             */
/*   Updated: 2024/05/23 10:29:14 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char	a = 'a';
	char	b = '1';
	char	c = '#';
	char	d = '*';
	char	e = 'ê';

	printf("a: %d\n", ft_isascii(a));
	printf("1: %d\n", ft_isascii(b));
	printf("#: %d\n", ft_isascii(c));
	printf("*: %d\n", ft_isascii(d));
	printf("ê: %d\n", ft_isascii(e));
}*/
