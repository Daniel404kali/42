/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 16:25:27 by descamil          #+#    #+#             */
/*   Updated: 2023/10/12 18:19:24 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current_list;

	if (lst != NULL && *lst != NULL && del != NULL)
	{
		current_list = *lst;
		while (current_list != NULL)
		{
			del(current_list->content);
			free(current_list);
			current_list = current_list->next;
		}
	}
	*lst = NULL;
}
