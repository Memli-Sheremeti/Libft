/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshereme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 16:18:45 by mshereme          #+#    #+#             */
/*   Updated: 2023/11/06 16:23:10 by mshereme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*f_lst;

	if (!lst || !del)
		return ;
	while (lst)
	{
		f_lst = (*lst)->next;
		del(f_lst);
		free(f_lst);
		*lst = f_lst;
	}
}
