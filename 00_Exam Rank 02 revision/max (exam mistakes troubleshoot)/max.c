/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:48:22 by katan             #+#    #+#             */
/*   Updated: 2024/11/09 18:41:36 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	max(int* tab, unsigned int len)
{
	int				result;
	unsigned int	i;

	i = 0;
	result = tab[i];
	if (!tab)
		return (0);
	if (len == 0)
		return (0);
	while (i < len)
	{
		if (result < tab[i])
			result = tab[i];
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	int	i = 1;
	int *numbers = NULL;

	printf("largest number in array %d\n", max(numbers, 0));
	return (0);
}
