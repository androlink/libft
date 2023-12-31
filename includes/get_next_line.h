#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef FD_SIZE
#  define FD_SIZE 1024
# endif

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 1024
# endif

# include "list.h"
# include "mem.h"
# include "str.h"

char	*get_next_line(int);
size_t	ft_buflen(t_list *);
size_t	ft_getlen(char *str);

#endif
