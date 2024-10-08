/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 19:09:55 by katan             #+#    #+#             */
/*   Updated: 2024/06/23 23:43:57 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		ft_memset(ptr, 0, nmemb * size);
	}
	return (ptr);
}
/*
int main(void)
{
	size_t num_elements = 5;
	 // Allocate an array of 5 integers using ft_calloc
	int *array = (int *)ft_calloc(num_elements, sizeof(int));
   // Check if the allocation was successful
	if (array == NULL)
	{
		printf("Memory allocation failed.\n");
		return 1;
	}
    // Print the allocated and zero-initialized array elements
    for (size_t i = 0; i < num_elements; i++) 
	{
	        printf("array[%zu] = %d\n", i, array[i]);
    }
    // Free the allocated memory
    free(array);
    return 0;
}
*/
