/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:16:35 by katan             #+#    #+#             */
/*   Updated: 2024/09/14 19:21:13 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H


# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include "../Libft/libft.h"

typedef struct s_stack
{
	int	*array;
	int	size;
}	t_stack;

void	swap(t_stack *stack);
void	swap_a(t_stack *stack_a);
void	swap_b(t_stack *stack_b);
void	swap_a_b(t_stack *stack_a,t_stack *stack_b);
void	rotate(t_stack *stack)
void	rotate_a(t_stack *stack_a)
void	rotate_b(t_stack *stack_b)
void	rotate_a_and_b(t_stack *stack_a, t_stack *stack_b)



#endif


