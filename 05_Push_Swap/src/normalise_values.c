/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalise_values.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:24:30 by katan             #+#    #+#             */
/*   Updated: 2024/11/24 02:10:21 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normalise_values(t_stack *stack_a)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack_a->size)
	{
		j = 0;	
		while (j < stack_a->size)
		{	
			if (stack_a->array[i]->value > stack_a->array[j]->value)
				stack_a->array[i]->norm_pos++;
			j++;
		}
		i++;
	}
}