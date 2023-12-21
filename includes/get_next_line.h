/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 06:42:03 by gcros             #+#    #+#             */
/*   Updated: 2023/12/21 07:48:56 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# ifndef FD_SIZE
#  define FD_SIZE 1024
# endif

# ifndef EOL
#  define EOL '\n'
# endif

# ifndef EOS
#  define EOS '\0'
# endif

# include <stdio.h>
# include <stdlib.h>
# include <stddef.h>
# include <unistd.h>

# include "str.h"
# include "mem.h"

typedef struct s_buffer
{
	size_t	cursor;
	size_t	end;
	char	buf[BUFFER_SIZE + 1];
}	t_buffer;

char	*get_next_line(int fd);

#endif
