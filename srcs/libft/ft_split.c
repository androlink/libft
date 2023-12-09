/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 06:25:45 by gcros             #+#    #+#             */
/*   Updated: 2023/11/16 20:22:04 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countwords(char const *str, char sep)
{
	size_t	count;

	count = 0;
	while (*str)
	{
		while (*str && *str == sep)
			str++;
		if (*str && *str != sep)
			count++;
		while (*str && *str != sep)
			str ++;
	}
	return (count);
}

static char	*ft_getnextword(char const *str, char sep)
{
	char	*buf;
	size_t	i;

	while (*str && *str == sep)
		str++;
	i = 0;
	while (str[i] && str[i] != sep)
		i++;
	buf = (char *) malloc(sizeof(char) * (i + 1));
	i = 0;
	while (str[i] && str[i] != sep && buf)
	{
		buf[i] = str[i];
		i++;
	}
	if (buf)
		buf[i] = '\0';
	return (buf);
}

static void	ft_freebuf(char ***buf)
{
	size_t	i;

	i = 0;
	while (buf[0][i])
	{
		free(buf[0][i]);
		i++;
	}
	free(buf[0]);
	buf[0] = NULL;
}

char	**ft_split(char const *s, char c)
{
	size_t		count;
	char		**buf;
	size_t		i;
	char const	*str;

	str = s;
	count = ft_countwords(str, c);
	buf = (char **) malloc((count + 1) * sizeof(char *));
	i = 0;
	while (i < count && buf)
	{
		buf[i] = ft_getnextword(str, c);
		if (!buf[i])
			ft_freebuf(&buf);
		while (*str && *str == c)
			str++;
		while (*str && *str != c)
			str++;
		i++;
	}
	if (buf)
		buf[count] = NULL;
	return (buf);
}
