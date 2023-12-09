/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 19:39:41 by gcros             #+#    #+#             */
/*   Updated: 2023/12/06 19:10:35 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
size_t	ft_printchar(int c);
size_t	ft_printstr(char *str);
size_t	ft_printnbr(long long lnbr);
size_t	ft_printxnbr(unsigned long long lnbr, char *xset);
size_t	ft_printptr(unsigned long long llnbr);

#endif