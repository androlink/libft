/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 02:56:05 by gcros             #+#    #+#             */
/*   Updated: 2023/12/06 22:37:07 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printstr(char *str)
{
	size_t	i;

	if (!str)
		return (write(1, "(null)", 6));
	i = 0;
	while (str[i])
		i++;
	return (write(1, str, i));
}
