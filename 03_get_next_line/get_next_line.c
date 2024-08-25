/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42singapore.sg>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:00:52 by katan             #+#    #+#             */
/*   Updated: 2024/08/25 20:06:19 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

static char *fill_line_buffer(int fd, char *left, char *buffer)
{
	ssize_t buff_read;
	char	*temp;

	buff_read = 1;
	while (buff_read > 0)
	{
		buff_read = read(fd, buffer, BUFFER_SIZE);
		if (buff_read == -1)
			return (free(left), NULL);
		else if (buff_read == 0)
			break ;
		buffer[buff_read] = 0;
		if (!left)
			left = ft_strdup("");
		temp = left;
		left = ft_strjoin(temp, buffer);
		free(left);
		left = NULL;
		if (ft_strchr(buffer, '\n'))
			break ;
	}
	return (left);
}

static char *set_line(char *line_buffer)
{
	char	*left;
	ssize_t		i;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0 || line_buffer[1] == 0)
		return (NULL);
	left = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (*left == 0)
	{
		free(left);
		left = NULL;
	}
	line_buffer[i + 1] = 0;
	return (left);
}

char *get_next_line(int fd)
{
	static char	*left;
	char		*line;
	char		*buffer;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(left), free(buffer), NULL);
	if (!buffer)
		return NULL;
	line = fill_line_buffer(fd, left, buffer);
	free(buffer);
	buffer = NULL;
	if (!line)
		return NULL;
	left = set_line(line);
	return (line);
}

