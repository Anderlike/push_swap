/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:29:15 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/07 11:44:43 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

n_stack	*ft_lstlast(n_stack *head)
{
	n_stack	*tmp;

	tmp = head;
	while (tmp->next)
	{
		tmp = tmp->next;
		if (tmp->next == NULL)
			return (tmp);
	}
	return (tmp);
}
/*
#include <stdio.h>

int	main(void)
{
	n_stack *node1 = (n_stack *)malloc(sizeof(n_stack));
	node1->content = ft_strdup("Node 1");
	node1->next = NULL;

	n_stack *node2 = (n_stack *)malloc(sizeof(n_stack));
	node2->content = ft_strdup("Node 2");
	node2->next = NULL;

	node1->next = node2;

	printf("Lista:\n");
	n_stack *last_node = ft_lstlast(node1);
	printf("%s\n", (char *)last_node->content);

	free(node1->content);
	free(node1);
	free(node2->content);
	free(node2);

	return (0);
} */