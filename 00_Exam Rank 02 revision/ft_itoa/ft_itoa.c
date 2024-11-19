/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/19 14:54:12 by katan             #+#    #+#             */
/*   Updated: 2024/11/19 15:04:19 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// cannot print int min (because nbr or sth cannot take.. must use unsigned somehow)

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

char *ft_itoa(int nbr)
{
	unsigned int n;
	int len;
	char *result;

	n = nbr;
	len = 0;
	if (nbr <= 0)
		len++;
	while(n)
	{
		n = n / 10;
		len++;
	}
	result = (char *)malloc(sizeof(char)*(len+1));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	if (nbr == 0)
	{
		result[0] = '0';
		return (result);
	}
	if (nbr < 0)
	{
		result[0] = '-';
		n = -nbr;
	}
	
	while(nbr)
	{
		result[len-1] = nbr % 10 + '0';
		nbr = nbr / 10;
		len--;
	}
	return (result);
}

int main(int argc, char **argv)
{
	int	num;
	char *str;
	if (argc ==2)
	{
		num = atoi(argv[1]);
		str = ft_itoa(num);
		if (str)
		{
			printf("%s\n",str);
			free(str);
		}
	}	
	return (0);
}

// static unsigned int	num_length(int n)
// {
// 	unsigned int	i;

// 	i = 0;
// 	if (n == 0)
// 		return (1);
// 	if (n < 0)
// 		i = i + 1;
// 	while (n != 0)
// 	{
// 		n = n / 10;
// 		i++;
// 	}
// 	return (i);
// }

// char	*ft_itoa(int n)
// {
// 	char			*str;
// 	unsigned int	number;
// 	unsigned int	length;

// 	length = num_length(n);
// 	str = (char *)malloc(sizeof(char) * (length + 1));
// 	if (str == NULL)
// 		return (NULL);
// 	if (n < 0)
// 	{
// 		str[0] = '-';
// 		number = -n;
// 	}
// 	else
// 		number = n;
// 	if (number == 0)
// 		str[0] = '0';
// 	str[length] = '\0';
// 	while (number != 0)
// 	{
// 		str[length - 1] = (number % 10 + '0');
// 		number = number / 10;
// 		length--;
// 	}
// 	return (str);
// }

// int	main(void) 
// {
// 	// Integer to String
// 	int num = -2147483648;
// 	char* str = ft_itoa(num);
// 	if (str)
// 	{
//     	printf("itoa: %d -> %s\n", num, str);
//     } 
// 	else
// 	{
//     	printf("Memory allocation failed!\n");
// 	}
//     // Freeing allocated memory for the string
// 	free(str);

// 	return (0);
// }