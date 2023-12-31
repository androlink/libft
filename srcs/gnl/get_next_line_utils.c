#include "get_next_line.h"

#include <stdio.h>

size_t	ft_buflen(t_list *buf)
{
	size_t	i;
	t_list	*tmp;

	i = ft_getlen((char *)buf->content);
	tmp = buf->next;
	while (tmp && tmp->next)
	{
		i += BUFFER_SIZE;
		//printf("\tgetlen >> +%d\n", BUFFER_SIZE);
		tmp = tmp->next;
	}
	if (tmp)
		i += ft_getlen((char *)tmp->content);
	++i;
	//printf("===buflen : %ld===\n", i);
	return (i);
}

size_t	ft_getlen(char *str)
{
	char	*p;
	
	p = ft_strchr(str, '\n');
	if (p == NULL)
	{
		//printf("=1=getlen : %ld=1=\n", ft_strlen(str));
		return (ft_strlen(str));
	}
	//printf("=2=getlen : %ld=2=\n", p - str + (*p == '\n'));
	return (p - str + (*p == '\n'));
}
