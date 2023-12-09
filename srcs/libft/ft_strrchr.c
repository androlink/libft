/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 14:19:06 by gcros             #+#    #+#             */
/*   Updated: 2023/11/15 18:02:00 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*pc;

	pc = NULL;
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			pc = (char *)&s[i];
		i++;
	}
	if (s[i] == (char)c)
		pc = (char *)&s[i];
	return (pc);
}
