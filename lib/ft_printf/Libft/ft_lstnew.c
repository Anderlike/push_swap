/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:47:31 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/12 10:54:39 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(int value)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = value;
	new->next = NULL;
	return (new);
}
/*
#include <stdio.h>

int	main(void)
{
	int num = 42;
	t_list *node = ft_lstnew(&num);

	printf("Node content: %d\n", *(int *)node->content);

	char *str = "batata";
	node = ft_lstnew(str);

	printf("Str content: %s\n", (char *)node->content);

	return (0);
}*/