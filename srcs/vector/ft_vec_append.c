/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_append.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:30:52 by gcros             #+#    #+#             */
/*   Updated: 2025/08/17 16:07:07 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include "mem.h"

int	ft_vec_append(t_vector *vector, void *elem)
{
	if (vector->capacity == vector->size)
		if (ft_vec_resize(vector, vector->size * 2 + 1) == FT_FAIL)
			return (FT_FAIL);
	ft_memcpy(vector->data + vector->size * vector->elem_size,
		elem,
		vector->elem_size);
	vector->size++;
	return (FT_SUCCESS);
}
