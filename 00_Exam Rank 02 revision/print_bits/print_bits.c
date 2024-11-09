/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 10:53:43 by katan             #+#    #+#             */
/*   Updated: 2024/11/09 13:04:04 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void print_bits(unsigned char octet)
{
	int				i = 8;
	unsigned char	bit;

	while(i--)
	{
		bit = (octet >> i & 1) + '0'; //shift octet right and get the bit, + '0' to get the ascii representation)
		write(1, &bit,1);
	}
}
int main(int argc, char **argv)
{
	int	num;
	if (argc == 2)
	{
		num = atoi(argv[1]);
		print_bits(num);
		return (0);
	}
}
/*
When you pass 35 (decimal) to the function, it's stored in the computer's memory as binary automatically - that's just how computers work internally. But we're not directly "accessing" each bit to print it.
Here's what's happening:

When you write 35 in your code, it's a decimal number
The computer stores it as 00100011 in memory (binary)
	We need to "extract" each bit one by one to print them
*/		
