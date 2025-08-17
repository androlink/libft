/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 12:02:38 by androlink         #+#    #+#             */
/*   Updated: 2025/08/17 16:06:10 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arr.h"

int	ft_arr_push(t_array *array, void *elem)
{
	if (array->size == array->capacity)
		return (FT_FAIL);
	array->data[array->size] = elem;
	array->size += 1;
	return (FT_SUCCESS);
}
