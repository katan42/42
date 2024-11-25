/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialise.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:48:35 by katan             #+#    #+#             */
/*   Updated: 2024/11/25 18:33:55 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack *init_stack(int capacity)
{
    t_stack *stack;

    stack = malloc(sizeof(t_stack));
    if (!stack)
        return (NULL);
    stack->array = malloc(sizeof(t_norm) * capacity);
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
        if (!validate_input(argv[i+1], capacity))
            error_exit(stack_a, stack_b);
        stack_a->array[i].value = ft_atol(argv[i + 1]);
        stack_a->array[i].norm = 1;
	    i++;
    }
    return (stack_a);
}