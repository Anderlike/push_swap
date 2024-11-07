/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:54:23 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/10/28 11:54:23 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int get_max_bits(n_stack **stack)
{
    n_stack *head;
    int max;
    int max_bits;

    head = *stack;
    max = head->content;
    max_bits = 0;
    while (head)
    {
        if (head->content > max)
            max = head->content;
        head = head->next;
    }
    while ((max >> max_bits) != 0)
        max_bits++;
    return (max_bits);
}

void radix(n_stack **stack_A, n_stack **stack_B)
{
	n_stack	*head_A;
	int		i;
	int		j;
	int		size;
	int		max_bits;

	i = 0;
	head_A = *stack_A;
	size = ft_lstsize(head_A);
	max_bits = get_max_bits(stack_A);
	while (i < max_bits)
	{
		j = 0;
		while (j++ < size)
		{
			head_A = *stack_A;
			if (((head_A->content >> i) & 1) == 1)
				ra(stack_A);
			else
				pb(stack_A, stack_B);
		}
		while (ft_lstsize(*stack_B) != 0)
			pa(stack_A, stack_B);
		i++;
	}
}
