/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printxnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:47:51 by gcros             #+#    #+#             */
/*   Updated: 2025/08/17 17:12:44 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_int.h"

size_t	ft_printxnbr(int fd, unsigned long long ullnbr, char *xset)
{
	size_t	count;

	count = 0;
	if (ullnbr / 16 != 0)
		count = ft_printxnbr(fd, ullnbr / 16, xset);
	return (count + write(fd, &xset[ullnbr % 16], 1));
}
