/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchernik <dchernik@student.42urduliz.com>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/27 16:54:45 by dchernik          #+#    #+#             */
/*   Updated: 2025/02/05 19:48:17 by dchernik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list	*lptr;

	if (content == NULL)
		return (NULL);
	lptr = (t_list *)malloc(1 * sizeof(t_list));
	if (lptr == NULL)
		return (NULL);
	lptr->content = content;
	lptr->next = NULL;
	return (lptr);
}
