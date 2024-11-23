/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialise.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:48:35 by katan             #+#    #+#             */
/*   Updated: 2024/11/23 18:32:27 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *init_stack(int capacity)
{
    t_stack *stack;

    stack = malloc(sizeof(t_stack));
    if (!stack)
        return (NULL);
    stack->array = malloc(sizeof(t_norm *) * capacity);
    if (!stack->array)
    {
        free(stack);
        return (NULL);
    }
    stack->size = 0;
    return (stack);
}

t_stack	*init_stacks(int capacity, t_stack *stack_a, t_stack *stack_b, char **argv)
{
	int	i;

    stack_a = init_stack(capacity);
    if (!stack_a)
        return (NULL);
    stack_b = init_stack(capacity);
    if (!stack_b)
    {
        free(stack_a);
        return (NULL);
    }
	i = 0;
	while (i < capacity)
	{
		stack_a->array[i] = malloc(sizeof(t_norm *));
		if (!stack_a->array[i])
		{
			free(stack_a); 
			return (NULL);
		}
		stack_a->array[i]->value = argv[i + 1];
		stack_a->array[i]->norm_pos = 1;
		i++;
	}
    return (stack_a);
}