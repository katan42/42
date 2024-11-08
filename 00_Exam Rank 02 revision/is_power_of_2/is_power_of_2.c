/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 13:51:46 by katan             #+#    #+#             */
/*   Updated: 2024/11/07 16:35:49 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	return ((n & (n - 1)) == 0);
}

int main(int argc, char **argv)
{
	unsigned int	num;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		printf("%d", is_power_of_2(num));
	}
	else 
		printf("incorrect argument count");
	return (0);
}
