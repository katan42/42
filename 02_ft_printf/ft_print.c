/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 16:47:57 by katan             #+#    #+#             */
/*   Updated: 2024/07/29 17:51:47 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_printf_check(char s, va_list *args, int *count)
{
	if (s == 'c')
		ft_printchar(va_arg(*args, int), count);
	else if (s == 's')
		ft_printstr(va_arg(*args, char *), count);
	else if (s == 'd' || s == 'i')
		ft_print_nbr(va_arg(*args, int), count);
	else if (s == 'u')
		ft_print_unsigned_nbr(va_arg(*args, unsigned int), count);
	else if (s == 'x')
		ft_print_hex(va_arg(*args, int), count, 'x');
	else if (s == 'X')
		ft_print_hex(va_arg(*args, int), count, 'X');
	else if (s == 'p')
		ft_print_ptr(va_arg(*args, size_t), count);
	else if (s == '%')
		ft_printchar('%', count);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		i;
	int		count;

	if (!s)
		return (0);
	i = 0;
	count = 0;
	va_start(args, s);
	while (s[i] != '\0')
	{
		if (s[i] == '%')
		{
			i++;
			ft_printf_check(s[i], &args, &count);
		}
		else
		{
			ft_printchar((char)s[i], &count);
		}
		i++;
	}
	va_end(args);
	return (count);
}
