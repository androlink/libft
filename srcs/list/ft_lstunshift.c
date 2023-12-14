/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstunshift.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcros <gcros@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 06:16:25 by gcros             #+#    #+#             */
/*   Updated: 2023/12/14 06:20:57 by gcros            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	ft_lstunshift(t_list **lst, void *data)
{
	t_list	*new;

	new = ft_lstnew(data);
	if (new == NULL)
		return ;
	ft_lstadd_back(lst, new);
}
