/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_error_free.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:30:10 by katan             #+#    #+#             */
/*   Updated: 2024/11/23 19:16:27 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack *stack)
{
    if (stack)
    {
        if (stack->array)
            free(stack->array);    // Free array first
        free(stack);              // Then free struct
    }
}

int	free_everything(t_stack *stack_a, t_stack *stack_b, t_norm norm)
{
    free_stack(stack_a);
    free_stack(stack_b);
    free (norm);
    return (1);
}

int	error_exit(t_stack *stack_a, t_stack *stack_b, t_norm norm)
{
    free_stack(stack_a);
    free_stack(stack_b);
    free(norm);
    stack_a->array = NULL;
    stack_b->array = NULL;
    norm ?? = NULL;
    write(2, "Error\n", 6);
    exit(1);
}
