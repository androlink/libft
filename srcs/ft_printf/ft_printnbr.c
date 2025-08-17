/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 17:09:36 by gcros             #+#    #+#             */
/*   Updated: 2025/08/17 17:15:08 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_int.h"

size_t	ft_printnbr(int fd, long long llnbr)
{
	size_t	count;

	count = 0;
	if (llnbr < 0)
		return (write(fd, "-", 1) + ft_printnbr(fd, -llnbr));
	if (llnbr / 10 != 0)
		count += ft_printnbr(fd, llnbr / 10);
	return (count + ft_printchar(fd, (llnbr % 10) + '0'));
}
