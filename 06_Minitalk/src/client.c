/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/11/29 22:35:05 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"


//sending least significant bit first.. ie rightmost
void	str_to_bit_send(char *str, pid_t pid)
{
	int	bit;
	int	i;

	i = 0;
	bit = 0;
	while(str[i] != '\0')
	{
		while (bit < CHAR_BIT)
		{
			if(str[i] >> bit & 1 == 0)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			bit++;
			usleep(100);
		}
	bit = 0;
	i++;
	}
}




int	main(int argc, char **argv)
{
	pid_t	pid;
	char	*str;


	str = argv[2];
	if (argc != 3)
		exit(ft_printf("usage: ./client <PID> <message> \n", EXIT_FAILURE);



	if (argc == 3)
	{
		pid_error_check(&argv[1]);
		pid = ft_atol(argv[1]);
		str_to_bit_send(*str, pid);
		str_to_bit_send("\0", pid);
	}
}

	prog, PID, argv[2]
	Sending Signals: The client sends signals (SIGUSR1 and SIGUSR2) to the server. This is done by invoking system calls like kill() in the client’s code, specifying the server’s PID and the signal to send.

Encoding Data: The client encodes the string it needs to send into a series of signals. For example, it might encode the string into bits, with SIGUSR1 representing ‘0’ and SIGUSR2 representing ‘1’.

Transmission: The client sends these signals one by one to the server. The operating system delivers these signals to the server process.
	if (errno == EINVAL)
	{
		write(1, "Error\n", 6);
		return (1);
	}

	return (0);
}
int	pid_error_check(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
		{
			write(2, "Error\n", 6);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	if(errno == ESRCH)
		write(2, "Error: PID does not exist\n", 25);
	else if (errno == EPERM)
		write(2, "Error: Permission denied\n", 23);
	exit(EXIT_FAILURE);
}



}

if (result == -1)
{
	if(errno == ESRCH)
		write(2, "Error: PID does not exist\n", 25);
	else if (errno == EPERM)
		write(2, "Error: Permission denied\n", 23);
	else
		write(2, "Error\n", 6);
	exit(EXIT_FAILURE);
}
