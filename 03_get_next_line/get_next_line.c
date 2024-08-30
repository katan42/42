/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: katan <katan@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/03 14:00:52 by katan             #+#    #+#             */
/*   Updated: 2024/08/30 17:56:24 by katan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_exact_line(char *line)
{
}

char	*ft_strchr(const char *s, int i)
{
	unsigned char	c;

	c = (unsigned char)i;
	while (*s || c == '\0')
	{
		if (*s++ == c)
		{
			return ((char *)--s);
		}
	}
	return (NULL);
}

static char	*fill_line_buffer(int fd, char *left, char *buffer)
{
	ssize_t	buff_read;
	char	*temp;
	char	*check_nl;

	buff_read = 1;
	while (buff_read > 0)
	{
		buff_read = read(fd, buffer, BUFFER_SIZE);
		if (buff_read < 0)
			return (NULL);
		else if (buff_read == 0)
			break ;
		buffer[buff_read] = '\0';
		if (!left)
			left = ft_strdup("");
		if (!left)
			return (NULL);
		temp = left;
		left = ft_strjoin(temp, buffer);
		free(temp);
		temp = NULL;
		if(!left)
			return (NULL);
		check_nl = ft_strchr(left, '\n');
		if (check_nl)
			break;
	}
	return (left);
}

static char	*set_line(char *line_buffer)
{
	char		*left;
	ssize_t		i;

	i = 0;
	while (line_buffer[i] != '\n' && line_buffer[i] != '\0')
		i++;
	if (line_buffer[i] == 0)
		return (NULL);
	left = ft_substr(line_buffer, i + 1, ft_strlen(line_buffer) - i);
	if (!left)
			return (NULL);
	if (*left == 0)
	{
		free(left);
		left = NULL;
	}
	line_buffer[i + 1] = '\0';
	return (left);
}

char	*get_next_line(int fd)
{
	static char	*left;
	char		*line;
	char		*buffer;

	buffer = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (free(left), left = NULL, free(buffer), NULL);
	if (!buffer)
		return (free(left), left = NULL, NULL);
	line = fill_line_buffer(fd, left, buffer);
	free(buffer);
	buffer = NULL;
	if (!line)
		return (free(left), left = NULL, NULL);
	left = set_line(line);
	line = get_exact_line(line);
	return (line);
}
