/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:40:15 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/07 15:40:15 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

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