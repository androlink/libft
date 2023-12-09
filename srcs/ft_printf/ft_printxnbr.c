/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printxnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/21 15:47:51 by gcros             #+#    #+#             */
/*   Updated: 2023/12/06 22:37:13 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

size_t	ft_printxnbr(unsigned long long ullnbr, char *xset)
{
	size_t	count;

	count = 0;
	if (ullnbr / 16 != 0)
		count = ft_printxnbr(ullnbr / 16, xset);
	return (count + write(1, &xset[ullnbr % 16], 1));
}
