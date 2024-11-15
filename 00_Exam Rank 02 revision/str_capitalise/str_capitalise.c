/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalise.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 15:22:23 by katan             #+#    #+#             */
/*   Updated: 2024/11/15 15:57:21 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	int count;

	i = 0;
	j = 1;
	if(argc == 1)
		write(1, "\n", 1);
	count = argc;
	while (count>1)
	{
		while (argv[j][i] != '\0')
		{
			if (argv[j][i] >= 'a' && argv[j][i] <= 'z')
			{
				if (i == 0 || argv[j][i - 1] == 32 || argv[j][i - 1] == 9)
				{
					argv[j][i] -= 32;
				}
			}
			else if (argv[j][i] >= 'A' && argv[j][i] <= 'Z')
			{
				argv[j][i] += 32;
			}
			write(1, &argv[j][i], 1);
			i++;
		}
		j++;
		count--;
		}
		write(1, "\n",1);

	}
