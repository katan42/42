/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/11/30 18:44:44 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

t_msg	g_msg;

void handle_signal(int signum)
{
	int	bit_val;

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

//sigemptyset(&sa.sa_mask) initializes the signal mask to an empty set,
//Think of sa_flags like switches that modify how your signal handler behaves:All switches off (default behavior)

int main(int argc, char **argv)
{
	struct	sigaction sa;

	sa.sa_handler = handle_signal;
	sigemptyset(&sa.sa_mask);
	sa.sa_flags = 0;
	(void)argv;

	if (argc != 1)
		exit(write(2, "Error\n", 6));
	ft_printf("server PID is %d\n", getpid());
	if ((sigaction(SIGUSR1, &sa, NULL) == -1) || (sigaction(SIGUSR2, &sa, NULL) == -1))
		exit(ft_printf("Signal handler setup failed\n"));
	while (1) //infinite loop
		pause();
	return (0);
}
