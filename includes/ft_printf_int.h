/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 16:20:15 by gcros             #+#    #+#             */
/*   Updated: 2025/08/17 17:08:28 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_INT_H
# define FT_PRINTF_INT_H

# include <stdarg.h>
# include <stddef.h>
# include <unistd.h>

size_t	ft_printchar(int fd, int c);
size_t	ft_printstr(int fd, char *str);
size_t	ft_printnbr(int fd, long long lnbr);
size_t	ft_printxnbr(int fd, unsigned long long lnbr, char *xset);
size_t	ft_printptr(int fd, unsigned long long llnbr);

#endif