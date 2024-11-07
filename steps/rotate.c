/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:41:46 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/07 15:41:46 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

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
