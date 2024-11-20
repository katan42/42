/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/11/20 14:03:47 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack stack_a;
	t_stack stack_b;
	int count;

	if (argc < 2)
		return (0);
	if (argc == 2 && argv[1][0] == '\0')
		return (write(2,"Error\n,6)",1));

	count = argc - 1;
	??


	if(!sort_check(&stack_a))
		sort_menu(&stack_a, &stack_b);
	free(??);
	return (0);


}