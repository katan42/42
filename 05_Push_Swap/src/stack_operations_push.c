/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_push.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:59:36 by katan             #+#    #+#             */
/*   Updated: 2024/11/19 00:31:25 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// pa (push a): Take the first element at the top of b and put it at the top of a.
// Do nothing if b is empty.
// pb (push b): Take the first element at the top of a and put it at the top of b.
// Do nothing if a is empty.

void	push(t_stack *stack_a, t_stack *stack_b)
{
	int	i;

	if (stack_b->size < 1)
		return ;
	
	i = stack_a->size;
	while (i > 0)
	{
		stack_a->array[i] = stack_a->array[i-1];
		i--;
	}
	stack_a->array[0] = stack_b->array[0];
	stack_a->size++;
	
	i = 0;
	while (i < stack_b->size - 1)
	{
       stack_b->array[i] = stack_b->array[i+1];
       i++;
	}
	stack_b->size--;
}

void	push_a(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_a,stack_b);
	write(1, "pa\n", 3); 
}

void	push_b(t_stack *stack_a, t_stack *stack_b)
{
	push(stack_b,stack_a);
	write(1, "pb\n", 3); 
}