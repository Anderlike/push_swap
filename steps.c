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
int push(n_stack **stack_to, n_stack **stack_from)
{
	n_stack	*tmp;
	n_stack	*head_to;
	n_stack	*head_from;

	if (ft_lstsize(*stack_from) == 0)
		return (-1);
	head_to = *stack_to;
	head_from = *stack_from;
	tmp = head_from;
	head_from = head_from->next;
	*stack_from = head_from;
	if (!head_to)
	{
		head_to = tmp;
		head_to->next = NULL;
		*stack_to = head_to;
	}
	else
	{
		tmp->next = head_to;
		*stack_to = tmp;
	}
	return (0);
}

int pa(n_stack **stack_A, n_stack **stack_B)
{
    if(push(stack_A, stack_B) == -1)
        return (-1);
    ft_printf("pa\n");
    return (0);
}

int pb(n_stack **stack_A, n_stack **stack_B)
{
    if(push(stack_B, stack_A) == -1)
        return (-1);
    ft_printf("pb\n");
    return (0);
}

int rotate(n_stack **stack)
{
	n_stack	*head;
	n_stack	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	*stack = head->next;
	head->next = NULL;
	tail->next = head;
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
    if((ft_lstsize(*stack_A) < 2) || (ft_lstsize(*stack_B) < 2))
        return (-1);
    rotate(stack_A);
    rotate(stack_B);
    ft_printf("rr\n");
    return (0);
}

int reverse_rotate(n_stack **stack)
{
	n_stack	*head;
	n_stack	*tail;

	if (ft_lstsize(*stack) < 2)
		return (-1);
	head = *stack;
	tail = ft_lstlast(head);
	while (head)
	{
		if (head->next->next == NULL)
		{
			 head->next = NULL;
			 break ;
		}
		head = head->next;
	}
	tail->next = *stack;
	*stack = tail;
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