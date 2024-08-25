/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testread.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:18:31 by katan             #+#    #+#             */
/*   Updated: 2024/08/25 20:06:03 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
    int fd;
    char buffer[11];
    ssize_t bytesRead;

    // Open the file for reading
    fd = open("example.txt", O_RDONLY);
    if (fd == -1) {
        perror("Failed to open file");
        return 1;
    }

    // Read from the file
    bytesRead = read(fd, buffer, sizeof(buffer) - 1);
    if (bytesRead == -1) {
        perror("Failed to read file");
        close(fd);
        return 1;
    }

    // Null-terminate the buffer and print it
    buffer[bytesRead] = '\0';
    printf("Read %zd bytes: %s\n", bytesRead, buffer);

    // Close the file
    close(fd);

    return 0;
}
