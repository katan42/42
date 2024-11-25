/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_error_free.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:30:10 by katan             #+#    #+#             */
/*   Updated: 2024/11/25 20:21:18 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
	free(stack->array);
	free(stack);
}

int	free_everything(t_stack *stack_a, t_stack *stack_b)
{
	free_stack(stack_a);
	free_stack(stack_b);
	return (1);
}

int	error_exit(t_stack **stack_a, t_stack **stack_b)
{
	free_stack(*stack_a);
	free_stack(*stack_b);
	write(2, "Error\n", 6);
	exit(1);
}
