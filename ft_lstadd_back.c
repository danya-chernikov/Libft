/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:55:01 by dchernik          #+#    #+#             */
/*   Updated: 2025/01/12 16:46:31 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*nptr;

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
