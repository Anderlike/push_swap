/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 16:24:38 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/07 09:59:24 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(n_stack *head)
{
	size_t	i;
	n_stack	*tmp;

	tmp = head;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	n_stack *node1 = (n_stack *)malloc(sizeof(n_stack));
	node1->next = NULL;
	n_stack *node2 = (n_stack *)malloc(sizeof(n_stack));
	node2->next = NULL;
	n_stack *node3 = (n_stack *)malloc(sizeof(n_stack));
	node2->next = NULL;

	node1->next = node2;
	node2->next = node3;

	printf("Tamanho da list: %d\n", ft_lstsize(node1));

	free(node1);
	free(node2);
	free(node3);

	return (0);
}*/