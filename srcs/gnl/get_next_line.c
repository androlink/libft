/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: androlink <androlink@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 06:55:45 by gcros             #+#    #+#             */
/*   Updated: 2023/12/31 17:30:13 by androlink        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static int	is_empty(t_buffer *buf)
{
	return (buf->cursor == buf->end);
}

int	ft_linetostr(char **dest, t_buffer *buf)
{
	char	*str;
	size_t	i;
	size_t	j;
	size_t	start;

	j = 0;
	if (*dest)
		j = ft_strlen(*dest);
	start = buf->cursor;
	i = start;
	while (i < (buf->end) && buf->buf[i] != EOL)
		++i;
	str = malloc(j + (i - start) + (buf->buf[i] == EOL) + 1);
	if (!str)
		return (ft_nfree((void **)dest), -1);
	ft_memcpy(str, *dest, j);
	ft_memcpy(str + j, buf->buf + start, (buf->buf[i] == EOL) + i - start);
	str[(i - start) + j + (buf->buf[i] == EOL)] = EOS;
	free(*dest);
	*dest = str;
	buf->cursor = i + (buf->buf[i] == EOL);
	return (buf->buf[i] == EOL);
}

char	*get_next_line(int fd)
{
	static t_buffer	buf[FD_SIZE];
	char			*str;
	ssize_t			check;

	check = 2;
	str = NULL;
	while ((check == 0 || check == 2) && fd != -1 && fd < FD_SIZE)
	{
		if (check == 0 || is_empty(&buf[fd]))
		{
			check = read(fd, buf[fd].buf, BUFFER_SIZE);
			if (check == 0)
				break ;
			if (check == -1)
				return (free(str), NULL);
			buf[fd].cursor = 0;
			buf[fd].end = check;
		}
		check = ft_linetostr(&str, &buf[fd]);
	}
	return (str);
}
