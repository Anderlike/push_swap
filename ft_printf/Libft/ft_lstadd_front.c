/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 16:49:17 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/05 16:38:21 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(n_stack **lst, n_stack *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	n_stack *head = NULL;

	n_stack *node1 = (n_stack *)malloc(sizeof(n_stack));
	n_stack *node2 = (n_stack *)malloc(sizeof(n_stack));
	n_stack *node3 = (n_stack *)malloc(sizeof(n_stack));

	node1->content = strdup("Primeiro");
	node1->next = NULL;
	ft_lstadd_front(&head, node1);

	node2->content = strdup("Segundo");
	node2->next = NULL;
	ft_lstadd_front(&head, node2);

	node3->content = strdup("Terceiro");
	node3->next = NULL;
	ft_lstadd_front(&head, node3);

	printf("Lista:\n");
	n_stack *current = head;
	while (current)
	{
		printf("%s\n", (char *)(current->content));
		current = current->next;
	}

	current = head;
	while (current)
	{
		n_stack *next = current->next;
		free(current->content);
		free(current);
		current = next;
	}

	return (0);
}*/