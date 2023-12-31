# Libft

## How to use

### Make

``` make -C libft/ ```

### Make debug

``` make -C libft/ debug```

### Compilation

add thid line in your compilation command
- ``` -L libft/ -l ft -I libft/includes/ ```
  - `-L`	->	path to the lib
  - `-l`	->	lib name
  - `-I`	->	path for `.h`

## All function

[char.h](includes/char.h)

| function | path |
| :-----------: |	:-------------------------------------------------: |
| ft_isalpha	|	[srcs/char/ft_isalpha.c](./srcs/char/ft_isalpha.c)	|
| ft_isalnum	|	[srcs/char/ft_isalnum.c](./srcs/char/ft_isalnum.c)	|
| ft_isascii	|	[srcs/char/ft_isascii.c](./srcs/char/ft_isascii.c)	|
| ft_isdigit	|	[srcs/char/ft_isdigit.c](./srcs/char/ft_isdigit.c)	|
| ft_isprint	|	[srcs/char/ft_isprint.c](./srcs/char/ft_isprint.c)	|
| ft_tolower	|	[srcs/char/ft_tolower.c](./srcs/char/ft_tolower.c)	|
| ft_toupper	|	[srcs/char/ft_toupper.c](./srcs/char/ft_toupper.c)	|

[mem.h](includes/mem.h)

| function | path |
| :-----------: |	:-------------------------------------------------: |
| ft_memset		|	[srcs/mem/ft_memset.c](./srcs/mem/ft_memset.c)		|
| ft_bzero		|	[srcs/mem/ft_bzero.c](./srcs/mem/ft_bzero.c)		|
| ft_memcpy		|	[srcs/mem/ft_memcpy.c](./srcs/mem/ft_memcpy.c)		|
| ft_mempcpy	|	[srcs/mem/ft_memcpy.c](./srcs/mem/ft_memcpy.c)		|
| ft_memmove	|	[srcs/mem/ft_memmove.c](./srcs/mem/ft_memmove.c)	|
| ft_memchr		|	[srcs/mem/ft_memchr.c](./srcs/mem/ft_memchr.c)		|
| ft_memcmp		|	[srcs/mem/ft_memcmp.c](./srcs/mem/ft_memcmp.c)		|
| ft_calloc		|	[srcs/mem/ft_calloc.c](./srcs/mem/ft_calloc.c)		|

[num.h](includes/num.h)

| function | path |
| :-------: |	:-----------------------------------------: |
| ft_atoi	|	[srcs/num/ft_atoi.c](./srcs/num/ft_atoi.c)	|
| ft_atol	|	[srcs/num/ft_atol.c](./srcs/num/ft_atol.c)	|

[str.h](includes/str.h)

| function | path |
| :---------------: |	:-------------------------------------------------: |
| ft_strlen			|	[srcs/str/ft_strlen.c](./srcs/str/ft_strlen.c)		|
| ft_strlcpy		|	[srcs/str/ft_strcpy.c](./srcs/str/ft_strcpy.c)		|
| ft_strlcat		|	[srcs/str/ft_strlcat.c](./srcs/str/ft_strlcat.c)	|
| ft_strchr			|	[srcs/str/ft_strchr.c](./srcs/str/ft_strchr.c)		|
| ft_strncmp		|	[srcs/str/ft_strncmp.c](./srcs/str/ft_strncmp.c)	|
| ft_strnstr		|	[srcs/str/ft_strnstr.c](./srcs/str/ft_strnstr.c)	|
| ft_strdup			|	[srcs/str/ft_strdup.c](./srcs/str/ft_strdup.c)		|
| ft_substr			|	[srcs/str/ft_substr.c](./srcs/str/ft_substr.c)		|
| ft_strjoin		|	[srcs/str/ft_strjoin.c](./srcs/str/ft_strjoin.c)	|
| ft_strtrim		|	[srcs/str/ft_strtrim.c](./srcs/str/ft_strtrim.c)	|
| ft_strmapi		|	[srcs/str/ft_strmapi.c](./srcs/str/ft_strmapi.c)	|
| ft_striteri		|	[srcs/str/ft_striteri.c](./srcs/str/ft_striteri.c)	|
| ft_split			|	[srcs/str/ft_split.c](./srcs/str/ft_split.c)		|
| ft_itoa			|	[srcs/str/ft_itoa.c](./srcs/str/ft_itoa.c)			|
| ft_strncpy		|	[srcs/str/ft_strcpy.c](./srcs/str/ft_strcpy.c)		|
| ft_stpcpy			|	[srcs/str/ft_strcpy.c](./srcs/str/ft_strcpy.c)		|
| ft_strisnumber	|	[srcs/str/ft_strisnum.c](./srcs/str/ft_strisnum.c)	|
| ft_strsfree		|	[srcs/str/ft_split.c](./srcs/str/ft_split.c)		|
| ft_strsjoin		|	[srcs/str/ft_strsjoin.c](./srcs/str/ft_strsjoin.c)	|
| ft_strtrim		|	[srcs/str/ft_strtrim.c](./srcs/str/ft_strtrim.c)	|
| ft_strmapi		|	[srcs/str/ft_strmapi.c](./srcs/str/ft_strmapi.c)	|

[put.h](includes/put.h)

| function | path |
| :-----------: |	:-----------------------------------------------------: |
| ft_putchar_fd	|	[srcs/put/ft_putchar_fd.c](./srcs/put/ft_putchar_fd.c)	|
| ft_putstr_fd	|	[srcs/put/ft_putstr_fd.c](./srcs/put/ft_putstr_fd.c)	|
| ft_putendl_fd	|	[srcs/put/ft_putendl_fd.c](./srcs/put/ft_putendl_fd.c)	|
| ft_putnbr_fd	|	[srcs/put/ft_putnbr_fd.c](./srcs/put/ft_putnbr_fd.c)	|

[ft_printf.h](includes/ft_printf.h)

| function | path |
| :-----------: |	:-----------------------------------------------------------------: |
| ft_printf		|	[srcs/ft_printf/ft_printf.c](./srcs/ft_printf/ft_printf.c)			|
| ft_printchar	|	[srcs/ft_printf/ft_printchar.c](./srcs/ft_printf/ft_printchar.c)	|
| ft_printstr	|	[srcs/ft_printf/ft_printstr.c](./srcs/ft_printf/ft_printstr.c)		|
| ft_printnbr	|	[srcs/ft_printf/ft_printnbr.c](./srcs/ft_printf/ft_printnbr.c)		|
| ft_printxnbr	|	[srcs/ft_printf/ft_printxnbr.c](./srcs/ft_printf/ft_printxnbr.c)	|
| ft_printptr	|	[srcs/ft_printf/ft_printptr.c](./srcs/ft_printf/ft_printptr.c)		|

[list.h](includes/list.h)

| function | path |
| :---------------: |	:-------------------------------------------------------------: |
| ft_lstnew			|	[srcs/list/ft_lstnew.c](./srcs/list/ft_lstnew.c)				|
| ft_lstadd_front	|	[srcs/list/ft_lstadd_front.c](./srcs/list/ft_lstadd_front.c)	|
| ft_lstsize		|	[srcs/list/ft_lstsize.c](./srcs/list/ft_lstsize.c)				|
| ft_lstlast		|	[srcs/list/ft_lstlast.c](./srcs/list/ft_lstlast.c)				|
| ft_lstadd_back	|	[srcs/list/ft_lstadd_back.c](./srcs/list/ft_lstadd_back.c)		|
| ft_lstdelone		|	[srcs/list/ft_lstdelone.c](./srcs/list/ft_lstdelone.c)			|
| ft_lstclear		|	[srcs/list/ft_lstclear.c](./srcs/list/ft_lstclear.c)			|
| ft_lstiter		|	[srcs/list/ft_lstiter.c](./srcs/list/ft_lstiter.c)				|
| ft_lstmap			|	[srcs/list/ft_lstmap.c](./srcs/list/ft_lstmap.c)				|
| ft_lstpop			|	[srcs/list/ft_lstpop.c](./srcs/list/ft_lstpop.c)				|
| ft_lstpush		|	[srcs/list/ft_lstpush.c](./srcs/list/ft_lstpush.c)				|
| ft_lstshift		|	[srcs/list/ft_lstshift.c](./srcs/list/ft_lstshift.c)			|
| ft_lstunshift		|	[srcs/list/ft_lstunshift.c](./srcs/list/ft_lstunshift.c)		|

[get_next_line.h](includes/get_next_line.h)

| function | path |
| :-----------: |	:-----------------------------------------------------: |
| get_next_line	|	[srcs/gnl/get_next_line.c](./srcs/gnl/get_next_line.c)	|
