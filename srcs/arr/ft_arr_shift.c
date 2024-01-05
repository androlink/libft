/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arr_shift.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: androlink <androlink@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 15:00:54 by androlink         #+#    #+#             */
/*   Updated: 2024/01/03 23:20:54 by androlink        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "arr.h"

void	*ft_arr_shift(t_array *array)
{
	void	*elem;

	if (array->size == 0)
		return (NULL);
	elem = array->data[0];
	ft_memmove(array->data, array->data + 1, array->size * sizeof(void *));
	array->size -= 1;
	return (elem);
}
