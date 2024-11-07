/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:41:23 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/07 15:41:23 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int swap(n_stack **stack_A)
{
    n_stack *tmp;
    n_stack *next;
    int tmp_val;
    int tmp_index;

    if(ft_lstsize(*stack_A) < 2)
        return (-1);
    tmp = *stack_A;
    next = tmp->next;
    if(!tmp && !next)
        return (-1);
    tmp_val = tmp->content;
    tmp_index = tmp->index;
    tmp->content = next->content;
    tmp->index = next->index;
    next->content = tmp_val;
    next->index = tmp_index;
    return (0);
}

int sa(n_stack **stack_A)
{
    if(swap(stack_A) == -1)
        return (-1);
    ft_printf("sa\n");
    return (0);
}
int sb(n_stack **stack_B)
{
    if(swap(stack_B) == -1)
        return (-1);
    ft_printf("sb\n");
    return (0);
}
int ss(n_stack **stack_A, n_stack **stack_B)
{
    if(swap(stack_A) == -1 || swap(stack_B) == -1)
        return (-1);
    ft_printf("ss\n");
    return (0);
}