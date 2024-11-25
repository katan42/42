/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:13 by katan             #+#    #+#             */
/*   Updated: 2024/11/25 21:15:05 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_duplicates(char **argv, int capacity)
{
	int		i;
	int		j;
	long	num1;
	long	num2;

	i = 1;
	while (i < capacity)
	{
		num1 = ft_atol(argv[i]);
		j = i + 1;
		while (j <= capacity)
		{
			num2 = ft_atol(argv[j]);
			if (num1 == num2)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	check_num(char const *str)
{
	int	i;

	i = 0;
	if ((str[i] == '-' || str[i] == '+') && str[i + 1])
		i++;
	while (str[i])
	{	
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	validate_input(char *str)
{
	long	num;

	if (!check_num(str))
		return (0);
	num = ft_atol(str);
	if (num > INT_MAX || num < INT_MIN)
		return (0);
	return (1);
}
