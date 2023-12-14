/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 05:25:10 by gcros             #+#    #+#             */
/*   Updated: 2023/12/14 06:21:03 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_lstpush(t_list **lst, void *data)
{
	t_list	*new;

	new = ft_lstnew(data);
	if (new == NULL)
		return ;
	ft_lstadd_front(lst, new);
}
