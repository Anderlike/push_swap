/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:46:32 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/05 16:43:11 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(n_stack *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	//del(lst->content);
	free(lst);
}
/*
#include <stdio.h>

void	free_content(void *content)
{
	free(content);
}

int	main(void)
{
	n_stack	*node1;
	n_stack	*node2;
	n_stack	*current;

	node1 = (n_stack *)malloc(sizeof(n_stack));
	node1->content = ft_strdup("Node 1");
	node1->next = NULL;
	node2 = (n_stack *)malloc(sizeof(n_stack));
	node2->content = ft_strdup("Node 2");
	node2->next = NULL;
	node1->next = node2;
	printf("Lista sem ser apagada:\n");
	current = node1;
	while (current)
	{
		printf("%s\n", (char *)(current->content));
		current = current->next;
	}
	ft_lstdelone(node1, &free_content);
	printf("Lista depois de ser apagada:\n");
	current = node2;
	while (current)
	{
		printf("%s\n", (char *)(current->content));
		current = current->next;
	}
	free(node2->content);
	free(node2);
	return (0);
}
*/