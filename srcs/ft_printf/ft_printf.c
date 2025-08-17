/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 17:05:02 by gcros             #+#    #+#             */
/*   Updated: 2025/08/17 17:11:59 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf_int.h"

static size_t	ft_runflag(int fd, const char *str, va_list ap)
{
	if (str[1] == 'c')
		return (ft_printchar(fd, va_arg(ap, int)));
	else if (str[1] == 's')
		return (ft_printstr(fd, va_arg(ap, char *)));
	else if (str[1] == 'p')
		return (ft_printptr(fd, va_arg(ap, unsigned long long)));
	else if (str[1] == 'i' || str[1] == 'd')
		return (ft_printnbr(fd, va_arg(ap, int)));
	else if (str[1] == 'u')
		return (ft_printnbr(fd, va_arg(ap, unsigned int)));
	else if (str[1] == 'x')
		return (ft_printxnbr(fd, va_arg(ap, unsigned int), "0123456789abcdef"));
	else if (str[1] == 'X')
		return (ft_printxnbr(fd, va_arg(ap, unsigned int), "0123456789ABCDEF"));
	else if (str[1] == '%')
		return (ft_printchar(fd, '%'));
	else if (str[1] == '\0')
		return (0);
	return (0);
}

static int	ft_isflag(const char c)
{
	char	*set;

	set = "cspdiuxX%";
	if (c == '\0')
		return (1);
	while (*set)
		if (*(set++) == c)
			return (1);
	return (0);
}

static int	ft_dprintf_core(int fd, const char *str, va_list ap)
{
	size_t	i;
	size_t	wc;

	i = 0;
	wc = 0;
	if (write(fd, NULL, 0) || str == NULL)
		return (-1);
	while (str[i])
	{
		if (str[i] == '%' && ft_isflag(str[i + 1]))
		{
			if (str[i + 1] == '\0')
				return (-1);
			wc += ft_runflag(fd, str + i, ap);
			i++;
		}
		else
			wc += ft_printchar(fd, str[i]);
		i++;
	}
	return (wc);
}

int	ft_dprintf(int fd, const char *str, ...)
{
	int		ret;
	va_list	ap;

	va_start(ap, str);
	ret = ft_dprintf_core(fd, str, ap);
	va_end(ap);
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	int		ret;
	va_list	ap;

	va_start(ap, str);
	ret = ft_dprintf_core(1, str, ap);
	va_end(ap);
	return (ret);
}
