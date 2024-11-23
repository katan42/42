/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:32 by katan             #+#    #+#             */
/*   Updated: 2024/11/19 15:41:35 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *stack_a)
{
	int a; 
	int b;
	int c;

	a = stack_a->array[0]->norm_pos; 
	b = stack_a->array[1]->norm_pos; 
	c = stack_a->array[2]->norm_pos; 

	if (a < b && b > c && a < c) // 1 3 2
	{
		reverse_rotate_a(stack_a);
		swap_a(stack_a);
	}
	else if (a > b && b < c && a < c) // 2 1 3
		swap_a(stack_a);
	else if (a < b && b > c && c < a) // 2 3 1
		reverse_rotate_a(stack_a);
	else if (a > b && a > c && b < c) // 3 1 2
		rotate_a(stack_a);
	else if (a > b && a > c && b > c) // 3 2 1
	{
		swap_a(stack_a);
		reverse_rotate_a(stack_a);
	}
}


