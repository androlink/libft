/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printptr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 23:51:44 by gcros             #+#    #+#             */
/*   Updated: 2025/08/17 17:27:39 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_int.h"

size_t	ft_printptr(int fd, unsigned long long ullnbr)
{
	if (ullnbr == 0)
		return (write(fd, "(nil)", 5));
	return (ft_printstr(fd, "0x")
		+ ft_printxnbr(fd, ullnbr, "0123456789abcdef"));
}
