/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 11:31:24 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/07 11:14:36 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(n_stack **stack, n_stack *new)
{
	n_stack	*n;

	if (*stack)
	{
		n = ft_lstlast(*stack);
		n->next = new;
		new->next = NULL;
	}
	else
	{
		*stack = new;
		(*stack)->next = NULL;
	}
}
/*
#include <stdio.h>

int	main(void)
{
	n_stack *head = (n_stack *)malloc(sizeof(n_stack));
	head->content = "Primeiro";
	head->next = NULL;

	ft_lstadd_back(&head, (n_stack *)malloc(sizeof(n_stack)));
	head->next->content = "Segundo";
	head->next->next = NULL;

	ft_lstadd_back(&head, (n_stack *)malloc(sizeof(n_stack)));
	head->next->next->content = "Terceiro";
	head->next->next->next = NULL;

	printf("Lista:\n");
	n_stack *current = head;
	while (current)
	{
		printf("%s\n", (char *)(current->content));
		current = current->next;
	}

	current = head;
	n_stack *next;
	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}

	return (0);
} */