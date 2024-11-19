/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/11/19 18:36:54 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int sort_menu (t_stack *stack_a, t_stack *stack_b, int count)
{
	if (count == 1)
		return (1);
	else if (count == 2)
		swap_a(stack_a);
	else if (count == 3)
		sort_three(stack_a);
	else if (count == 5)
		sort_five(stack_a, stack_b);
}

if argc == 2 && argv[1][0] = '\0' return error

int main(int argc, char **argv)
{
	
}