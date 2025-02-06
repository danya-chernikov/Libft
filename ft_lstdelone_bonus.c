/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:54:51 by dchernik          #+#    #+#             */
/*   Updated: 2025/02/05 20:14:32 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

/* Is this function intended for node deletion? If so,
 * it should traverse the list from head to tail, and
 * when it encounters the node with the address `lst`,
 * it should assign the `next` variable the address of
 * the node following `lst` (the node to be deleted).
 * However, we cannot traverse the list starting from
 * its head because we are not provided with a pointer
 * to the head of the list; we only have a pointer to
 * a node in the list `lst`. Therefore, we must perform
 * exactly what was requested, even though it does not
 * have any practical sense. Testing this function does
 * not make sense either due to its obvious nature */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if ((lst == NULL) || (del == NULL))
		return ;
	del(lst->content);
	free(lst);
	lst = NULL;
}
