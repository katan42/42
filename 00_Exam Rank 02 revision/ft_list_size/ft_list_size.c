/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 14:01:45 by katan             #+#    #+#             */
/*   Updated: 2024/11/18 14:01:53 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int ft_list_size(t_list *begin_list)
{
    if(begin_list == 0)
        return (0);
    if (begin_list)
        return (1 + ft_list_size(begin_list->next));
}

int main(void)
{
    t_list *first = malloc(sizeof(t_list));
    t_list *second = malloc(sizeof(t_list));
    t_list *third = malloc(sizeof(t_list));
    
    int num1 = 42;
    int num2 = 24;
    int num3 = 3;

    first->data = &num1;
    second->data = &num2;
    third ->data = &num3;

    first->next = second;
    second->next = third;
    third->next = NULL;

    int count = ft_list_size(first);
    printf("number of nodes: %d\n", count);

    free(first);
    free(second);
    free(third);

}
