/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:52:01 by katan             #+#    #+#             */
/*   Updated: 2024/08/26 02:35:59 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int main(int argc, char **argv)
{
    int fd;
    char *line;

    if (argc != 2)
    {
        write(2, "Usage: ./program <filename>\n", 28);
        return 1;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd < 0)
    {
        write(2, "Error opening file\n", 19);
        return 1;
    }

	printf("Reading from file descriptor: %d\n", fd);
    printf("Buffer size: %d\n", BUFFER_SIZE);

// // Attempt to read the first line
//     line = get_next_line(fd);
//     if (line == NULL)
//     {
//         printf("get_next_line returned NULL\n");
//     }
//     else
//     {
//         printf("Read line: %s", line);
//         free(line);
//     }

    while ((line = get_next_line(fd)))
    {
        write(1, line, ft_strlen(line));
        free(line);
    }

    close(fd);
    return 0;
}
