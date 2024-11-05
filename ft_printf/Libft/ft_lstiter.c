/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:03:04 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/05 16:38:08 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(n_stack *lst, void (*f)(void *))
{
	while (lst != NULL)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*
#include <stdio.h>

void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}

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
	ft_lstiter(node1, &print_content);

	free(node1->content);
	free(node1);
	free(node2->content);
	free(node2);

	return (0);
}*/