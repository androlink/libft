/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_init.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:24:08 by gcros             #+#    #+#             */
/*   Updated: 2025/08/17 16:07:44 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdlib.h>

int	ft_vec_init(t_vector *vector, size_t elem_size)
{
	vector->data = malloc(1);
	if (vector->data == NULL)
		return (FT_FAIL);
	vector->size = 0;
	vector->elem_size = elem_size;
	vector->capacity = 0;
	return (FT_SUCCESS);
}
