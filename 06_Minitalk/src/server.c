/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/11/30 01:41:31 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int number;

void handle_signal(int signum)// Must take int parameter and return void
{
	if (signum == SIGUSR1)
		bit = 0;
	else if (signum == SIGUSR2)
		bit = 1;
}


 (i = 7; i >= 0; i--)
{
	number = (asciiCode >> i);
}

if ((sigaction(SIGUSR1, &sa, NULL == -1)) || (sigaction(SIGUSR2, &sa, NULL == -1)))
	exit(ft_printf("Signal handler setup failed\n"), EXIT_FAILURE);


int main(void)
{
	struct	sigaction sa;

	sa.sa_handler = handle_signal;
??mask?

	ft_printf("server PID is %d\n", getpid());

	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);

	while (1) //infinite loop
		pause();
	return (0);



getpid()
pid it INT_MAX
if ESRCH
prints PID
EPERM

Signal handler
Receiving Signals: The server has signal handlers set up to catch these signals. When a signal is received, the corresponding handler function is executed.




Reception: The server, upon receiving each signal, uses its signal handlers to process them.

decoding
Decoding: The server decodes the series of signals back into the original string or data format.

	while (1) //infinite loop
		pause();
	return (0);
}
