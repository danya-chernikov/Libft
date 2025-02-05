/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/05 17:53:51 by dchernik          #+#    #+#             */
/*   Updated: 2025/02/05 17:53:55 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*nptr;

	if ((lst == NULL) || (f == NULL))
		return ;
	nptr = lst;
	while (nptr != NULL)
	{
		f(nptr->content);
		nptr = nptr->next;
	}
}
