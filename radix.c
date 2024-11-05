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
    max = head->index;
    max_bits = 0;
    while (head)
    {
        if (head->index > max)
            max = head->index;
        head = head->next;
    }
    while ((max >> max_bits) != 0)
        max_bits++;
    return (max_bits);
}

void radix(n_stack **stack_a, n_stack **stack_b)
{
    int i;
    int j;
    int size;
    int max_bits;

    i = 0;
    size = ft_lstsize(*stack_a);
    max_bits = get_max_bits(stack_a);
    while (i < max_bits)
    {
        j = 0;
        while (j++ < size)
        {
            if (((*stack_a)->index >> i) & 1)
                ra(stack_a);
            else
                pb(stack_a, stack_b);
        }
        while (ft_lstsize(*stack_b) != 0)
            pa(stack_a, stack_b);
        i++;
    }
}