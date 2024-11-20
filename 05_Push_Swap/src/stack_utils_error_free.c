/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_utils_error_free.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:30:10 by katan             #+#    #+#             */
/*   Updated: 2024/11/20 16:13:36 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	error_exit(t_stack *stack_a, t_stack *stack_b, t_stack norm)
{
    free(stack_a->array);
    free(stack_b->array);
    free(norm);
    stack_a->array = NULL;
    stack_a->array = NULL;
    norm = NULL;
    write(2, "Error\n", 6);
    exit(1);
}


int	free_everything(t_stack *stack_a, t_stack *stack_b, t_stack norm)
{
    free(stack_a->array);
    free(stack_b->array);
    free(norm);
    return (1);
}


