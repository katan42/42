/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 14:17:07 by katan             #+#    #+#             */
/*   Updated: 2024/07/23 17:53:44 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

void	ft_printchar(char c, int *count);
void	ft_printstr(char *s, int *count);
void	ft_print_ptr(size_t ptr, int *count);
void	ft_print_nbr(int n, int *count);
void	ft_print_unsigned_nbr(unsigned int n, int *count);
void	ft_print_hex(unsigned int n, int *count, char conversion);
int		ft_printf(const char *s, ...);
#endif
