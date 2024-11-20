/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:16:35 by katan             #+#    #+#             */
/*   Updated: 2024/11/20 09:23:55 by katan            ###   ########.fr       */
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

typedef struct s_norm
{
	int	value;
	int	norm;
	int	orig_pos;
}	t_norm;


//operations
void	push(t_stack *stack_1, t_stack *stack_2);
void	push_a(t_stack *stack_a, t_stack *stack_b);
void	push_b(t_stack *stack_a, t_stack *stack_b);
void	reverse_rotate(t_stack *stack);
void	reverse_rotate_a(t_stack *stack_a);
void	reverse_rotate_b(t_stack *stack_b);
void	reverse_rotate_a_and_b(t_stack *stack_a, t_stack *stack_b);
void	rotate(t_stack *stack);
void	rotate_a(t_stack *stack_a);
void	rotate_b(t_stack *stack_b);
void	rotate_a_and_b(t_stack *stack_a, t_stack *stack_b);
void	swap(t_stack *stack);
void	swap_a(t_stack *stack_a);
void	swap_b(t_stack *stack_b);
void	swap_a_b(t_stack *stack_a,t_stack *stack_b);

//sort
void	sort_three(t_stack *stack);
void	sort_five(t_stack *stack_a, t_stack *stack_b);
int 	sort_menu (t_stack *stack_a, t_stack *stack_b, int count);
int		sort_check (t_stack *stack_a);

//error msg
void	error_exit(void);




#endif


