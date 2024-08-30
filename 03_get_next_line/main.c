#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h" // Make sure this includes the prototype for get_next_line

int main(void)
{
    int fd;
    char *line;

    // Open the file in read-only mode
    fd = open("test.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return (1);
    }

    // Read lines from the file using get_next_line and print them
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("line: %s", line);
		free(line);// Don't forget to free the memory allocated by get_next_line
    }

    // Close the file
    close(fd);
    return (0);
}
