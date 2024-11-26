/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_radix.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:46 by katan             #+#    #+#             */
/*   Updated: 2024/11/26 14:16:00 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	radix_sort(t_stack *stack_a, t_stack *stack_b)
{
	int	max_bits;
	int	bit;
	int	i;
	int	k;

	max_bits = 0;
	k = stack_a->size;
	while ((stack_a->size - 1) >> max_bits)
		max_bits++;
	bit = 0;
	while (bit < max_bits)
	{
		i = 0;
		while (i < k)
		{
			if (!(stack_a->array[0].norm >> bit & 1))
				push_b(stack_a, stack_b);
			else
				rotate_a(stack_a);
			i++;
		}
		while (stack_b->size > 0)
			push_a(stack_a, stack_b);
		bit++;
	}
}
