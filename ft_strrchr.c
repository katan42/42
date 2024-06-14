/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 18:19:54 by katan             #+#    #+#             */
/*   Updated: 2024/06/11 18:54:20 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
	int j;
	
	j = ft_strlen(s);
	while (j > 0)
	{
		if (s[j] == c)
		{
			return ((char *)&s[j]);
		}
		j--;
	}
	return (NULL);
}
/*int main(void)
{
	const char *str = "Hello, world!";
	char *ptr = ft_strrchr(str, 'o');
	    
	printf("ft_strrchr\nFound last character 'o' at position: %ld\n", ptr-str+1);
	return 0;
}
*/
