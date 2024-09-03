#include <fcntl.h>
#include <stdio.h>
#include "get_next_line.h"

int main(void)
{
    int fd;
    char *line;
    int	i;

    // Open the file in read-only mode
    fd = open("text.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("Error opening file");
        return (1);
    }

    // Read lines from the file using get_next_line and print them
    i=0;
    while ((line = get_next_line(fd)) != NULL)
    {
		i++;    
        printf("line %d: %s", i, line);
		free(line);
    }
	printf("fd: %d\n", fd);
    // Close the file
    close(fd);
    return (0);
}
