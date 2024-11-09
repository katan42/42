/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 13:04:18 by katan             #+#    #+#             */
/*   Updated: 2024/11/09 13:52:19 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

void print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char	bit;

	while(i--)
	{
		bit = (octet >> i & 1) + '0';
		write(1, &bit,1);
	}
}
int main(int argc, char **argv)
{
	int	number;
	
	if (argc == 2)
	{
		number = atoi(argv[1]);
		print_bits(swap_bits(number));
	}
	return (0);
}
