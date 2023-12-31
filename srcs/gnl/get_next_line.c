#include "get_next_line.h"

#include <stdio.h>

static t_list	*get_buffer(int);
static char	*get_line(t_list **);
static void	clean_buf(t_list **);
void	fill_buf(t_list *, char *);

char	*get_next_line(int fd)
{
	static t_list	*buf[FD_SIZE];
	char	        *str;

	if (fd < 0 || fd > FD_SIZE)
		return (NULL);
	if (buf[fd] == NULL)
		buf[fd] = get_buffer(fd);
	if (buf[fd] == NULL)
		return (NULL);
	str = get_line(&buf[fd]);
	clean_buf(&buf[fd]);
	return (str);
}

static char	*get_line(t_list **buf)
{
	char	*str;
	size_t	i;

	i = ft_buflen(*buf);
	str = malloc(sizeof(char) * (i + 1));
	if (str == NULL)
		return (NULL);
	fill_buf(*buf, str);
	return (str);
}

void	fill_buf(t_list *buf, char *str)
{
	char	*p;
	t_list	*tmp;

	//printf("==>fill_buf<==\n");

	p = ft_mempcpy(str, buf->content, ft_getlen(buf->content));
	//printf("===fill_buf : %ld===\n", p - str);
	tmp = buf->next;
	while (tmp && tmp->next)
	{
		p = ft_mempcpy(p, tmp->content, BUFFER_SIZE);
		//printf("===fill_buf : %ld===\n", p - str);
		tmp = tmp->next;
	}
	if (tmp)
	{
		p = ft_mempcpy(p, tmp->content, ft_getlen(tmp->content));
		//printf("===fill_buf : %ld===\n", p - str);
	}
	*p = '\0';
}

static void clean_buf(t_list **buf)
{
	char	*p;
	t_list	*tmp;

	if (*buf == NULL)
		return ;
	while ((*buf)->next)
		free(ft_lstpop(buf));
	tmp = *buf;
	p = ft_strchr((char *)tmp->content, '\n');
	if (p == NULL)
	{
		free(ft_lstpop(buf));
		return ;
	}
	p = ft_strdup(p + (*p == '\n'));

	free((*buf)->content);
	(*buf)->content = p;
}

static t_list	*get_buffer(int fd)
{
	t_list	*buf;
	char	*str;
	ssize_t	check;

	check = 1;
	buf = NULL;
	while (check == 1)
	{
		str = malloc(sizeof(char) * (BUFFER_SIZE + 1));
		if (str == NULL)
			return (ft_lstclear(&buf, &free), NULL);
		check = read(fd, str, BUFFER_SIZE);
		if (check > 0)
		{
			str[check] = '\0';
			check = ft_lstunshift(&buf, str);
			if (check == 1 && ft_strchr(str, '\n') != NULL)
				break ;
		}
	}
	if (check == -1)
		ft_lstclear(&buf, &free);
	if (check <= 0)
		free(str);
	return (buf);
}
