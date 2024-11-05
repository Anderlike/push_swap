/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/15 12:04:58 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/05 16:37:50 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

n_stack	*ft_lstmap(n_stack *lst, void *(*f)(void *), void (*del)(void *))
{
	n_stack	*new_list;
	n_stack	*last;
	n_stack	*new_node;

	new_list = NULL;
	last = NULL;
	while (lst != NULL)
	{
		new_node = (n_stack *)malloc(sizeof(n_stack));
		if (!new_node)
		{
			del(new_list);
			return (NULL);
		}
		new_node->content = f(lst->content);
		new_node->next = NULL;
		if (!new_list)
			new_list = new_node;
		else
			last->next = new_node;
		last = new_node;
		lst = lst->next;
	}
	return (new_list);
}
/*
void	*add_one(void *num)
{
	int	*val;
	int	*result;

	val = (int *)num;
	result = malloc(sizeof(int));
	if (result)
		*result = (*val) + 1;
	return (result);
}

#include <stdio.h>

void	free_int(void *num)
{
	free(num);
}

int	main(void)
{
	n_stack *head = malloc(sizeof(n_stack));
	n_stack *current = head;
	unsigned int i = 0;
	int nums[] = {1, 2, 3, 4, 5};
	while (i < 5)
	{
		current->content = malloc(sizeof(int));
		*(int *)(current->content) = nums[i];
		if (i < 4)
		{
			current->next = malloc(sizeof(n_stack));
			current = current->next;
		}
		else
			current->next = NULL;
		i++;
	}

	n_stack *new_list = ft_lstmap(head, &add_one, &free_int);

	printf("lista: ");
	current = head;
	while (current)
	{
		printf("%d ", *(int *)(current->content));
		n_stack *next = current->next;
		free(current->content);
		free(current);
		current = next;
	}
	printf("\n");

	printf("Resultado: ");
	current = new_list;
	while (current)
	{
		printf("%d ", *(int *)(current->content));
		n_stack *next = current->next;
		free(current->content);
		free(current);
		current = next;
	}
	printf("\n");
	free(new_list);
	return (0);
}*/