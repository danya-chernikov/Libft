/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/07 01:21:45 by dchernik          #+#    #+#             */
/*   Updated: 2025/02/07 01:21:48 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*nptr;

	if (lst == NULL)
		return (NULL);
	if (lst->next == NULL)
		return (lst);
	nptr = lst->next;
	while (nptr->next != NULL)
		nptr = nptr->next;
	return (nptr);
}
