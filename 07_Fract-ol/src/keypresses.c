/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   keypresses.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/12/01 02:04:51 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

void	handle_signal(int signum)
{
	static t_msg	g_msg;
	int				bit_val;

	bit_val = 0;
	if (signum == SIGUSR1)
		bit_val = 0;
	else if (signum == SIGUSR2)
		bit_val = 1;
	g_msg.c = g_msg.c | (bit_val << g_msg.bit_count);
	g_msg.bit_count++;
	if (g_msg.bit_count == 8)
	{
		ft_printf("%c", g_msg.c);
		if (!g_msg.c)
			ft_printf("\n");
		g_msg.c = 0;
		g_msg.bit_count = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_handler = handle_signal;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	ft_printf("server PID is %d\n", getpid());
	if ((sigaction(SIGUSR1, &sa, NULL) == -1)
		|| (sigaction(SIGUSR2, &sa, NULL) == -1))
		exit(ft_printf("Signal handler setup failed\n"));
	while (1)
		pause();
	return (0);
}
