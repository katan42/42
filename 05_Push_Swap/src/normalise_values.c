/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalise_values.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 09:24:30 by katan             #+#    #+#             */
/*   Updated: 2024/11/20 09:50:21 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normalise_values(t_stack *stack, t_norm *norm)
{
	int	i;
	int	j;

	i = 0; 

	while (i < stack->size)
	{
		norm[i].value = stack->array[i];
		norm[i].orig_pos = i;
		norm[i].norm = 0;
		i++;
	}
}