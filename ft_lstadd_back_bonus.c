/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:55:01 by dchernik          #+#    #+#             */
/*   Updated: 2025/02/06 17:32:51 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nptr;

	if ((lst == NULL) || (new == NULL))
		return ;
	nptr = (*lst)->next;
	if (nptr == NULL)
	{
		(*lst)->next = new;
		new->next = NULL;
	}
	else
	{
		while (nptr->next != NULL)
			nptr = nptr->next;
		nptr->next = new;
		new->next = NULL;
	}
}
