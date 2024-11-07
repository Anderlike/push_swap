/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 15:47:31 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/07 11:16:30 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

n_stack	*ft_lstnew(int value)
{
    n_stack *new;

    new = (n_stack *)malloc(sizeof(n_stack));
    if (!new)
        return NULL;
    new->content = value;
    new->next = NULL;
    return new;
}
/*
#include <stdio.h>

int	main(void)
{
	int num = 42;
	n_stack *node = ft_lstnew(&num);

	printf("Node content: %d\n", *(int *)node->content);

	char *str = "batata";
	node = ft_lstnew(str);

	printf("Str content: %s\n", (char *)node->content);

	return (0);
}*/