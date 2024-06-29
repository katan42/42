/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/10 15:30:13 by katan             #+#    #+#             */
/*   Updated: 2024/06/10 20:33:22 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
/*
int main(void)
{   
	char    str[] = "Let's go HOME";
	
	printf("before bzero %s\n", str);
	ft_bzero(str, 5);
	printf("after bzero %s\n", str);
}*/
