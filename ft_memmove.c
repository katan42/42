/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 20:35:57 by katan             #+#    #+#             */
/*   Updated: 2024/06/12 09:54:18 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t  i;
	char    *d;
	char    *s;
	
	i = 0;
	d = (char *)dest;
	s = (char *)src;

	if (d == s || n == 0)
	{
		return (dest);
	}
	if (d < s)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while ( i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}
int main() {
    char str1[] = "Hello, World!";
    char str2[20];

    printf("Before memmove, str1: %s\n", str1);
    
    // Using ft_memmove to copy str1 to str2
    ft_memmove(str2, str1, 13);
    printf("After memmove to str2: %s\n", str2);

    // Using ft_memmove for overlapping regions
    ft_memmove(str1 + 7, str1, 6); // Move "Hello," into the middle of "World!"
    printf("After overlapping memmove, str1: %s\n", str1);

    return 0;
}
