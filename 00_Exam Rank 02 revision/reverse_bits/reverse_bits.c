/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 14:58:15 by katan             #+#    #+#             */
/*   Updated: 2024/11/08 18:36:46 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char res = 0;
	
	while (i > 0)
	{
		res = res * 2 + (octet  % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

void	print_binary(unsigned char byte)
{
	int i = 7;
	while (i >= 0)
	{
		printf("%d", (byte >> i) & 1);
		i--;
	}
	printf("\n");
}

int main (int argc, char **argv)
{
	int num;

	if (argc == 2)
	{
		num = atoi(argv[1]);
		printf("reverse_bits: %d\n",reverse_bits(num));
		printf("in binary:");
		print_binary(reverse_bits(num));
	}
}
