/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 15:29:23 by katan             #+#    #+#             */
/*   Updated: 2024/11/30 18:37:08 by katan            ###   ########.fr       */
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
		while (bit < 8)
		{
			if(((str[i] >> bit) & 1) == 0)
				kill(pid, SIGUSR1);
			else
				kill(pid, SIGUSR2);
			bit++;
			usleep(1000);
		}
	bit = 0;
	i++;
	}
}

int	pid_error_check(char *str)
{
	int	i;
	int num;

	i = 0;
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
		{
			write(2, "Error, not a number\n", 20);
			exit(EXIT_FAILURE);
		}
		i++;
	}
	num = ft_atol(str);
	//ft_printf("%d", num);
	if (num <= 0 || num > INT_MAX)
		exit(write(2, "Error, invalid PID\n", 19));
	if(kill(num, 0) == -1)
	{
		if(errno == ESRCH)
			write(2, "Error: PID does not exist\n", 25);
		else if (errno == EPERM)
			write(2, "Error: Permission denied\n", 23);
		exit(EXIT_FAILURE);
	}
	return(0);
}

int	main(int argc, char **argv)
{
	pid_t	pid;
	char	*str;

	if (argc != 3)
		exit(ft_printf("Error, usage should be: ./client <PID> <message> \n"));
	pid = ft_atol(argv[1]);
	str = argv[2];
	pid_error_check(argv[1]);
	str_to_bit_send(str, pid);
	str_to_bit_send("\0", pid);
}
