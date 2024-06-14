/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/13 21:28:52 by katan             #+#    #+#             */
/*   Updated: 2024/06/14 12:30:15 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*subs;
	size_t		i;

	i = 0;
	subs = (char *)malloc(sizeof(char) * (len + 1));
	if (subs == 0)
	{
		return (NULL);
	}
	while (i < len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = 0;
	return (subs);
}
/*
int main(void) 
{
	const char* text = "Hello, world!";
	int start = 0;
	int length = 5;

	char* result = ft_substr(text, start, length);
	if (result != NULL) {
	printf("Substring: %s\n", result);
	free(result); // Free the allocated memory
	} else {
	printf("Invalid substring parameters.\n");
	}
    return 0;
}
*/
