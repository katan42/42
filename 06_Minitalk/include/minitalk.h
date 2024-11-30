/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:16:35 by katan             #+#    #+#             */
/*   Updated: 2024/11/30 16:50:52 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>
# include <string.h>
# include <limits.h>
# include <signal.h>
# include <errno.h>
# include "../libft/libft.h"
# include "../ft_printf/ft_printf.h"

typedef struct	s_msg
{
	unsigned char	c;
	int				bit_count;
}	t_msg;

//extern tells other files this variable exists
extern	t_msg	g_msg;

//signal
void	handle_signal(int signum);

//client
void	str_to_bit_send(char *str, pid_t pid);
int		pid_error_check(char *str);

#endif
