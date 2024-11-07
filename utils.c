/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:58:07 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/05 17:58:07 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_sorted(n_stack **stack)
{
    n_stack  *head;

    head = *stack;
    while (head && head->next)
    {
        if (head->content > head->next->content)
            return (0);
        head = head->next;
    }
    return (1);
}

int get_distance(n_stack **stack, int min)
{
    n_stack  *head;
    int distance;

    distance = 0;
    head = *stack;
    while (head)
    {
        if (head->content == min)
            break ;
        distance++;
        head = head->next;
    }
    return (distance);
}

static n_stack	*get_next_min(n_stack **stack)
{
	n_stack	*head;
	n_stack	*min;
	int		has_min;

	min = NULL;
	has_min = 0;
	head = *stack;
	if (head)
	{
		while (head)
		{
			if ((head->index == -1) && (!has_min || head->content < min->content))
			{
				min = head;
				has_min = 1;
			}
			head = head->next;
		}
	}
	return (min);
}

void	index_stack(n_stack **stack)
{
	n_stack	*head;
	int		index;

	index = 0;
	head = get_next_min(stack);
	while (head)
	{
		head->index = index++;
		head = get_next_min(stack);
	}
}

void	free_stack(n_stack **stack)
{
	n_stack	*head;
	n_stack	*tmp;

	head = *stack;
	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	free(stack);
}