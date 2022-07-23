/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rtwitch <rtwitch@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 15:32:58 by rtwitch           #+#    #+#             */
/*   Updated: 2022/05/25 15:38:58 by rtwitch          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*addr_next;

	while (*lst)
	{
		addr_next = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = addr_next;
	}
	*lst = NULL;
}
