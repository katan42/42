/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/09 09:48:22 by katan             #+#    #+#             */
/*   Updated: 2024/11/09 10:52:43 by katan            ###   ########.fr       */
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
	int numbers[argc - 1];

	while (i < argc)
	{
		numbers[i-1] = atoi(argv[i]); //changes command line argument in str to array of int
		i++;
	}
	printf("largest number in array %d\n", max(numbers, argc -1));
	return (0);
}
// When used in function call or assignment, numbers decays to a pointer
// pointing to the first element's address
// It's like saying "start looking at memory from this first element"
//thats why max fn needs the len parameter - because after decay, there's no way to know the original array size within the function!

// &numbers[0] explicitly gets address of first element
// This is exactly the same as the decayed pointer above

// &numbers gets address of ENTIRE array(incorrect)
// It's a pointer to an array of 5 ints, not just a pointer to an int
/*
   Memory visualization:
numbers:  [1][2][3][4][5]
          ↑
		      &numbers points here, but "knows" it points to 5 ints
			  */

