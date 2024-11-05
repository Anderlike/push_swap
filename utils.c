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

int get_distance(n_stack **stack, int index)
{
    n_stack  *head;
    int distance;

    distance = 0;
    head = *stack;
    while (head)
    {
        if (head->index == index)
            break ;
        distance++;
        head = head->next;
    }
    return (distance);
}