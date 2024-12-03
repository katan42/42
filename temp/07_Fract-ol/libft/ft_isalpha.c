/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:55:39 by katan             #+#    #+#             */
/*   Updated: 2024/05/22 15:00:24 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	char	str1[] = "a";
	char	str2[] = "B";
	char	str3[] = "1";
	char	str4[] = "1d";
	char	str5[] = "$123&*7";
	char	str6[] = "@";
	char	str7[] = ")";
	char	str8[] = "ABCDEFZ";
	char	str9[] = "ABCDEZ0";
							
	printf("a: %d\n", ft_isalpha(str1[0]));
	printf("B: %d\n", ft_isalpha(str2[0]));
	printf("1: %d\n", ft_isalpha(str3[0]));
	printf("1d: %d\n", ft_isalpha(str4[0]));
	printf("$123&*7: %d\n", ft_isalpha(str5[0]));
	printf("@: %d\n", ft_isalpha(str6[0]));
	printf("): %d\n", ft_isalpha(str7[0]));
	printf("ABCDEFZ: %d\n", ft_isalpha(str8[0]));
	printf("ABCDEZ0: %d\n", ft_isalpha(str9[0]));
}
*/
