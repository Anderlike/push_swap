/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:42:33 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/07 15:42:33 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

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
