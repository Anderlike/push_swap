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
int push(n_stack **stack_src, n_stack **stack_dest)
{
    n_stack *tmp;

    if (ft_lstsize(*stack_src) < 1)
        return (-1);

    tmp = *stack_src;
    *stack_src = (*stack_src)->next;

    tmp->next = *stack_dest;     
    *stack_dest = tmp;           

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

int rotate(n_stack **stack)
{
    n_stack *tmp;
    n_stack *lstlast;

    if(ft_lstsize(*stack) < 2)
        return (-1);
    tmp = *stack;
    lstlast = ft_lstlast(tmp);
    *stack = tmp->next;
    tmp->next = NULL;
    lstlast->next = tmp;
    return (0);
}

int ra(n_stack **stack_A)
{
    if(rotate(stack_A) == -1)
        return (-1);
    ft_printf("ra\n");
    return (0);
}

int rb(n_stack **stack_B)
{
    if(rotate(stack_B) == -1)
        return (-1);
    ft_printf("rb\n");
    return (0);
}

int rr(n_stack **stack_A, n_stack **stack_B)
{
    if(rotate(stack_A) == -1 || rotate(stack_B) == -1)
        return (-1);
    ft_printf("rr\n");
    return (0);
}

int reverse_rotate(n_stack **stack)
{
    n_stack *tmp;
    n_stack *lstlast;

    if(ft_lstsize(*stack) < 2)
        return (-1);
    lstlast = ft_lstlast(*stack);
    tmp = *stack;
    while(tmp)
    {
        if(tmp->next->next == NULL)
        {
            tmp->next = NULL;
            break;
        }
        tmp = tmp->next;
    }
    tmp->next = NULL;
    lstlast->next = *stack;
    *stack = lstlast;
    return (0);
}

int rra(n_stack **stack_A)
{
    if(reverse_rotate(stack_A) == -1)
        return (-1);
    ft_printf("rra\n");
    return (0);
}

int rrb(n_stack **stack_B)
{
    if(reverse_rotate(stack_B) == -1)
        return (-1);
    ft_printf("rrb\n");
    return (0);
}

int rrr(n_stack **stack_A, n_stack **stack_B)
{
    if(reverse_rotate(stack_A) == -1 || reverse_rotate(stack_B) == -1)
        return (-1);
    ft_printf("rrr\n");
    return (0);
}