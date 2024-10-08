/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 14:38:48 by katan             #+#    #+#             */
/*   Updated: 2024/08/08 12:27:51 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include "ft_printf.h"


int main(void)
{
	int	count;
	char *s2 = "Mussum Ipsum, cacilds vidis litro abertis. Posuere libero varius. Nullam a nisl ut ante blandit hendrerit. Aenean sit amet nisi. Atirei o pau no gatis, per gatis num morreus.";
	printf("%f\n", 2.0);
	ft_printf("%f\n", 2.0);
	count = ft_printf("%f\n", 2.0);
	ft_printf("%d\n", count);
	/*	
	printf("printf(d)   :I have %d apples\n", 5);
    count = printf("%d\n", 5);
	printf("%d\n", count);
	ft_printf("ft_printf(d):I have %d apples\n", 5);
	count = ft_printf("%d\n", 5);
	ft_printf("%d\n", count);
	printf("printf(d)   :I have $ %d\n", -5);
	ft_printf("ft_printf(d):I have $ %d\n", -5);
	printf("printf(d)   :I have $ %d\n", -2147483648);
	ft_printf("ft_printf(d):I have $ %d\n", -2147483648);
	printf("\n");

	printf("printf(i)   :I have %i apples\n", 2147483647);
	ft_printf("ft_printf(i):I have %i apples\n", 2147483647);
	
	printf("printf(i)   :I have $ %i\n", -2147483648);
	count = printf("printf(i)   :I have $ %i\n", -2147483648);
	printf("The number of characters printed: %d\n", count);
	
	ft_printf("ft_printf(i):I have $ %i\n", -2147483648);
	count = ft_printf("ft_printf(i):I have $ %i\n", -2147483648);
	ft_printf("The number of characters printed: %d\n", count);
	printf("\n");

	printf("printf(u)   :I have %u apples\n", 5);
	ft_printf("ft_printf(u):I have %u apples\n", 5);
	printf("printf(u)   :I have $ %u\n", -5);
	ft_printf("ft_printf(u):I have $ %u\n", -5);
	printf("\n");

	printf("printf(percent)   :100%% FTW\n");
	ft_printf("ft_printf(percent):100%% FTW\n");
	printf("\n");

	printf("printf(s)   :my name is %s\n", "katan");
	ft_printf("ft_printf(s):my name is %s\n", "katan");
	printf("\n");

	printf("printf(s)   :my name is %c\n", 'k');
	ft_printf("ft_printf(s):my name is %c\n", 'k');
	printf("\n");


	printf("printf(x)   : 5 in hexadecimal is %x\n", 5);
	ft_printf("ft_printf(x): 5 in hexadecimal is %x\n", 5);
	printf("printf(X)   : 5 in hexadecimal is %X\n", 5);
	ft_printf("ft_printf(X): 5 in hexadecimal is %X\n", 5);
	printf("printf(x)   : -5 in hexadecimal is %x\n", -5);
	ft_printf("ft_printf(x): -5 in hexadecimal is %x\n", -5);
	printf("printf(X)   : -5 in hexadecimal is %X\n", -5);
	ft_printf("ft_printf(X): -5 in hexadecimal is %X\n", -5);
	printf("printf(x)   : 0 in hexadecimal is %x\n", 0);
	ft_printf("ft_printf(x): 0 in hexadecimal is %x\n", 0);
	printf("printf(X)   : 0 in hexadecimal is %X\n", 0);
	ft_printf("ft_printf(X): 0 in hexadecimal is %X\n", 0);
	printf("printf(x)   : -2146483648 in hexadecimal is %x\n", -2146483648);
	printf("printf(X)   : -2146483648 in hexadecimal is %X\n", -2146483648);
	printf("printf(x)   : 255 in hexadecimal is %x\n", 255);
	printf("printf(X)   : 255 in hexadecimal is %X\n", 255);
	printf("printf(x)   : 2147483647 in hexadecimal is %x\n", 2147483647);
	printf("printf(X)   : 2147483647 in hexadecimal is %X\n", 2147483647);
	printf("\n");
	
	printf(%p\n", NULL)
	ft_printf("%p\n", NULL)

	printf("%s", "");
	printf("\n");
	ft_printf("%s", "");
	printf("\n");
	printf("\n");
	
	printf(" %s", "");
	printf("\n");
	ft_printf(" %s", "");
	printf("\n");
	printf("\n");

	printf("%s ", "");
	printf("\n");
	ft_printf("%s ", "");
	printf("\n");
	printf("\n");

	printf(" %s ", "");
	printf("\n");
	ft_printf(" %s ", "");
	printf("\n");
	printf("\n");
	
	printf(" %s ", "-");
	printf("\n");
	ft_printf(" %s ", "-");
	printf("\n");
	printf("\n");
	
	printf(" %s %s ", "", "-");
	printf("\n");
	ft_printf(" %s %s ", "", "-");
	printf("\n");
	printf("\n");
	
	printf(" %s %s ", " - ", "");
	printf("\n");
	ft_printf(" %s %s ", " - ", "");
	printf("\n");
	printf("\n");
	
	printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
	printf("\n");
	ft_printf(" %s %s %s %s %s", " - ", "", "4", "", s2);
	printf("\n");
	printf("\n");
	
	printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	printf("\n");
	ft_printf(" %s %s %s %s %s ", " - ", "", "4", "", "2 ");
	printf("\n");
	printf("\n");
	
	printf(" NULL %s NULL ", NULL);
	printf("\n");
	ft_printf(" NULL %s NULL ", NULL);
	printf("\n");
	printf("\n");
*/

}
