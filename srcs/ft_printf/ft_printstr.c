/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 02:56:05 by gcros             #+#    #+#             */
/*   Updated: 2025/08/17 17:10:20 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_int.h"

size_t	ft_printstr(int fd, char *str)
{
	size_t	i;

	if (!str)
		return (write(fd, "(null)", 6));
	i = 0;
	while (str[i])
		i++;
	return (write(fd, str, i));
}
