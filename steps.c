/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   steps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:57:49 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/10/28 11:57:49 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int switch(n_stack **stack_A)
{
    n_stack *tmp;
    n_stack *next;
    int value;
    int index;

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
    if(switch(stack_A) == -1)
        return (-1);
    ft_printf("sa\n");
    return (0);
}
int sb(n_stack **stack_B)
{
    if(switch(stack_B) == -1)
        return (-1);
    ft_printf("sb\n");
    return (0);
}
int ss(n_stack **stack_A, n_stack **stack_B)
{
    if(switch(stack_A) == -1 || switch(stack_B) == -1)
        return (-1);
    ft_printf("ss\n");
    return (0);
}
int push(n_stack **stack_src, n_stack **stack_dest)
{
    n_stack *tmp;
    n_stack *dest;
    n_stack *src;

    if(ft_lstsize(*stack_src) < 1)
        return (-1);
    dest = *stack_dest;
    src = *stack_src;
    tmp = stack_src;
    stack_src = stack_src->next;
    if(!dest)
    {
        dest = tmp;
        dest->next = NULL;
        *stack_dest = dest;
    }
    else
    {
        tmp->next = dest;
        dest = tmp;
    }
    return (0);
}

int pa(n_stack **stack_A, n_stack **stack_B)
{
    if(push(stack_B, stack_A) == -1)
        return (-1);
    ft_printf("pa\n");
    return (0);
}

int pb(n_stack **stack_A, n_stack **stack_B)
{
    if(push(stack_A, stack_B) == -1)
        return (-1);
    ft_printf("pb\n");
    return (0);
}

//rotate and reverse rotate left