/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_five.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:38 by katan             #+#    #+#             */
/*   Updated: 2024/11/18 15:29:40 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_five(t_stack *stack_a, t_stack *stack_b)
{
	while (stack_a->array[0].norm > 1)
	{
		rotate_a(stack_a);
	}
	push_b(stack_a, stack_b);
	while (stack_a->array[0].norm > 1)
	{
		rotate_a(stack_a);
	}
	push_b(stack_a, stack_b);
	sort_three(stack_a);
	if (stack_b->array[0].norm < stack_b->array[1].norm)
		swap_b(stack_b);
	push_a(stack_a, stack_b);
}