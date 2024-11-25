/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:32 by katan             #+#    #+#             */
/*   Updated: 2024/11/25 20:40:38 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_three(t_stack *a)
{
	if (a->array[0].norm < a->array[1].norm && a->array[1].norm
		> a->array[2].norm && a->array[0].norm < a->array[2].norm)
	{
		reverse_rotate_a(a);
		swap_a(a);
	}
	else if (a->array[0].norm > a->array[1].norm && a->array[1].norm
		< a->array[2].norm && a->array[0].norm < a->array[2].norm)
		swap_a(a);
	else if (a->array[0].norm < a->array[1].norm && a->array[1].norm
		> a->array[2].norm && a->array[2].norm < a->array[0].norm)
		reverse_rotate_a(a);
	else if (a->array[0].norm > a->array[1].norm && a->array[0].norm
		> a->array[2].norm && a->array[1].norm < a->array[2].norm)
		rotate_a(a);
	else if (a->array[0].norm > a->array[1].norm && a->array[0].norm
		> a->array[2].norm && a->array[1].norm > a->array[2].norm)
	{
		swap_a(a);
		reverse_rotate_a(a);
	}
}
