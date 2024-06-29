/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:52:29 by katan             #+#    #+#             */
/*   Updated: 2024/06/23 23:43:37 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
/*
int	main(void)
{
	char a = 'a';
	char b = 'B';
	char c = '$';
	
	printf("a: %d\n", ft_isalnum(a));
	printf("B: %d\n", ft_isalnum(b));
	printf("1: %d\n", ft_isalnum(1));
	printf("$: %d\n", ft_isalnum(c));
}*/
