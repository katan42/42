/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 16:00:01 by katan             #+#    #+#             */
/*   Updated: 2024/11/20 13:44:57 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ra (rotate a): Shift up all elements of stack a by 1.
// The first element becomes the last one.
// rb (rotate b): Shift up all elements of stack b by 1.
// The first element becomes the last one.
// rr : ra and rb at the same time.

void	rotate(t_stack *stack)
{
	int	temp;
	int	i;

	if (stack->size > 1)
	{	
		i = 0;
		temp = stack->array[i];
		while (i < stack->size - 1)
		{
			stack->array[i] = stack->array[i+1];
			i++;
		}
	}
	stack->array[i] = temp;
}

void	rotate_a(t_stack *stack_a)
{
	if (stack_a->size > 1)
	{	
		rotate(stack_a);
		write(1, "ra\n", 3);
	}
}

void	rotate_b(t_stack *stack_b)
{
	if (stack_b->size > 1)
	{	
		rotate(stack_b);
		write(1, "rb\n", 3);
	}
}

void	rotate_a_and_b(t_stack *stack_a, t_stack *stack_b)
{
	if (stack_a->size > 1 && stack_b->size > 1)
	{	
		rotate(stack_a);
		rotate(stack_b);
		write(1, "rr\n", 3);
	}
}

int main()
{
    t_stack *stack_a = malloc(sizeof(t_stack));
    t_stack *stack_b = malloc(sizeof(t_stack));
    
    // Initialize stacks
    stack_a->array = malloc(sizeof(int) * 4);
    stack_b->array = malloc(sizeof(int) * 4);
    
    // Stack A: [2,1,3,4]
    stack_a->array[0] = 2;
    stack_a->array[1] = 1;
    stack_a->array[2] = 3;
    stack_a->array[3] = 4;
    stack_a->size = 4;
    
    // Stack B: [5,6,7,8]
    stack_b->array[0] = 5;
    stack_b->array[1] = 6;
    stack_b->array[2] = 7;
    stack_b->array[3] = 8;
    stack_b->size = 4;

    printf("Before:\n");
    printf("Stack A: %d %d %d %d\n", 
        stack_a->array[0], stack_a->array[1], 
        stack_a->array[2], stack_a->array[3]);
    printf("Stack B: %d %d %d %d\n", 
        stack_b->array[0], stack_b->array[1], 
        stack_b->array[2], stack_b->array[3]);

    rotate_a_and_b(stack_a, stack_b);

    printf("\nAfter:\n");
    printf("Stack A: %d %d %d %d\n", 
        stack_a->array[0], stack_a->array[1], 
        stack_a->array[2], stack_a->array[3]);
    printf("Stack B: %d %d %d %d\n", 
        stack_b->array[0], stack_b->array[1], 
        stack_b->array[2], stack_b->array[3]);

    // Clean up
    free(stack_a->array);
    free(stack_b->array);
    free(stack_a);
    free(stack_b);
    return 0;
}