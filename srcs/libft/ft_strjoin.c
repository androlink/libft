/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 01:29:55 by gcros             #+#    #+#             */
/*   Updated: 2023/11/15 18:01:34 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	l;
	char	*ptr;

	l = ft_strlen(s1) + ft_strlen(s2) + 1;
	ptr = malloc(l);
	if (!ptr)
		return (ptr);
	ft_strlcpy(ptr, s1, l);
	ft_strlcat(ptr, s2, l);
	return (ptr);
}
