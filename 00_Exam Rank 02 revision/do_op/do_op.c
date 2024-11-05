/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 19:45:58 by katan             #+#    #+#             */
/*   Updated: 2024/11/05 20:08:27 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (argv[2][0] == '+')
			printf("%d", (atoi(argv[1])) + (atoi(argv[3])));
		if (argv[2][0] == '-')
			printf("%d", (atoi(argv[1])) - (atoi(argv[3])));
		if (argv[2][0] == '*')
			printf("%d", (atoi(argv[1])) * (atoi(argv[3])));
		if (argv[2][0] == '/')
			printf("%d", (atoi(argv[1])) / (atoi(argv[3])));
		if (argv[2][0] == '%')
			printf("%d", (atoi(argv[1])) % (atoi(argv[3])));
	}
	printf("\n");
	return (0);
}
