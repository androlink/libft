/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 15:39:17 by gcros             #+#    #+#             */
/*   Updated: 2023/12/17 20:34:03 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "num.h"

long	ft_atol(const char *nptr)
{
	int			s;
	long		res;
	const char	*str;

	str = nptr;
	res = 0;
	s = 1;
	while (*str == ' ' || (*str >= '\t' && *str <= '\r'))
		str++;
	if (*str == '-')
		s = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (ft_isdigit(*str))
	{
		if (res > LONG_MAX / 10)
			return (-(s == 1));
		res *= 10;
		if (res > LONG_MAX - (*str - '0'))
			return (-(s == 1));
		res += *str - '0';
		str++;
	}
	return (res * s);
}