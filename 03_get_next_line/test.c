/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 16:52:01 by katan             #+#    #+#             */
/*   Updated: 2024/08/04 17:34:15 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

#include <fcntl.h>


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

    while ((line = get_next_line(fd)))
    {
        write(1, line, strlen(line));
        free(line);
    }

    close(fd);
    return 0;
}
