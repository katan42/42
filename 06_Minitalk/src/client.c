/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/11/28 23:46:34 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

int	main(int argc, char **argv)
{
	int pid;

	if argc == 3

		pid = ft_atol(argv[1]);
		
	prog, PID, argv[2]
	Sending Signals: The client sends signals (SIGUSR1 and SIGUSR2) to the server. This is done by invoking system calls like kill() in the client’s code, specifying the server’s PID and the signal to send.

Encoding Data: The client encodes the string it needs to send into a series of signals. For example, it might encode the string into bits, with SIGUSR1 representing ‘0’ and SIGUSR2 representing ‘1’.

Transmission: The client sends these signals one by one to the server. The operating system delivers these signals to the server process.

	return (0);
}
