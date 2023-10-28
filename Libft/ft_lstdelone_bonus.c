/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: descamil <descamil@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/12 15:46:51 by descamil          #+#    #+#             */
/*   Updated: 2023/10/12 16:14:59 by descamil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst != NULL && del != NULL)
	{
		del(lst->content);
		free(lst);
	}
}
/*
void free_mod(void *content)
{
	free(content);
}

int main()
{
	t_list *list = NULL;
    char *data1 = "Element1";
    char *data2 = "Element2";
    t_list *node1 = ft_lstnew(data1);
    t_list *node2 = ft_lstnew(data2);

    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);

    t_list *current = list;
	ft_lstdelone(list, free_mod);
	current = list;
	while (current != NULL)
	{
		printf("Contenido del nodo: %s\n", (char *)current->content);
		current = current->next;
	}
	return (0);
}
*/