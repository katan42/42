/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_validation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:13 by katan             #+#    #+#             */
/*   Updated: 2024/11/23 19:05:04 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "../Libft/libft.h"
// #include "push_swap.h"

// is_numbers

// check duplicates

// overflow?

if (num > INT_MAX || num < INT_MIN)
    return (write(2,"Error\n,6)",1));


int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

int check_num(char const *str)
{
	int	i; 

	i=0;
	if ((str[i] == '-' || str[i] == '+') && str[i+1])
		i++;
	while (str[i])
	{	
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

// int main()
// {
// 	char const str [15] = "00002147";
// 	if (check_num(str) == 0)
// 		printf("not num\n");
// 	else if (check_num(str) == 1)
// 		printf("valid num\n");
// }