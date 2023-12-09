/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 18:33:17 by gcros             #+#    #+#             */
/*   Updated: 2023/11/16 20:26:15 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	size_t	size;

	size = ft_strlen(s);
	str = malloc(size + 1);
	if (!str)
		return (NULL);
	ft_strlcpy(str, s, size + 1);
	return (str);
}
