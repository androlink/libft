/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_vec_resize.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 18:31:36 by gcros             #+#    #+#             */
/*   Updated: 2025/08/17 16:07:56 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"
#include <stdlib.h>
#include "mem.h"

int	ft_vec_resize(t_vector *vector, size_t	ncapacity)
{
	void	*ndata;
	size_t	len;

	ndata = malloc((ncapacity * vector->elem_size));
	if (ndata == NULL)
		return (FT_FAIL);
	len = ncapacity;
	if (len > vector->size)
		len = vector->size;
	ft_memcpy(ndata, vector->data, len * vector->elem_size);
	free(vector->data);
	vector->data = ndata;
	vector->capacity = ncapacity;
	return (FT_SUCCESS);
}
