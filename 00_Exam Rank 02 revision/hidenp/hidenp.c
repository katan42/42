/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 19:26:47 by katan             #+#    #+#             */
/*   Updated: 2024/11/10 20:18:19 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (argc == 3)
	{
		while(argv[1][i] && argv[2][j])
		{
			if (argv[2][j] == argv[1][i])
				i++;
			j++;
		}
		if(argv[1][i] == '\0')
			write (1, "1", 1);
		else 
			write (1, "0", 1);
	}
	write(1, "\n", 1);
	return (0);
}
