/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:55:00 by dchernik          #+#    #+#             */
/*   Updated: 2024/12/27 16:55:04 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*cur_node_ptr;
	t_list	*next_node_ptr;

	next_node_ptr = NULL;
	cur_node_ptr = (*lst)->next;
	if (cur_node_ptr != NULL)
		next_node_ptr = cur_node_ptr->next;
	ft_lstdelone((*lst), del);
	(*lst) = NULL;
	while (cur_node_ptr != NULL)
	{
		ft_lstdelone(cur_node_ptr, del);
		cur_node_ptr = next_node_ptr;
		if (cur_node_ptr == NULL)
			break ;
		next_node_ptr = next_node_ptr->next;
	}
}
