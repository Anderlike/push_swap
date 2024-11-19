/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:54:23 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/19 17:30:31 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

static int	get_max_bits(t_list **stack)
{
	t_list	*head;
	int		max;
	int		max_bits;

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

static int	get_min_value(t_list **stack)
{
	t_list	*head;
	int		min;

	head = *stack;
	min = head->content;
	while (head)
	{
		if (head->content < min)
			min = head->content;
		head = head->next;
	}
	return (min);
}

static void	adjust_content(t_list **stack, int offset)
{
	t_list	*head;

	head = *stack;
	while (head)
	{
		head->content += offset;
		head = head->next;
	}
}

void	process_bit(t_list **stack_a, t_list **stack_b, int bit, int size)
{
	int		j;
	t_list	*head_a;

	j = 0;
	while (j < size)
	{
		if (is_sorted(stack_a) && !*stack_b)
			return ;
		head_a = *stack_a;
		if ((head_a->content >> bit) & 1)
			ra(stack_a);
		else
			pb(stack_a, stack_b);
		j++;
	}
	while (ft_lstsize(*stack_b))
		pa(stack_a, stack_b);
}

void	radix(t_list **stack_a, t_list **stack_b)
{
	int		i;
	int		size;
	int		max_bits;
	int		offset;

	size = ft_lstsize(*stack_a);
	offset = -get_min_value(stack_a);
	adjust_content(stack_a, offset);
	max_bits = get_max_bits(stack_a);
	i = 0;
	while (i < max_bits)
	{
		process_bit(stack_a, stack_b, i, size);
		i++;
	}
	adjust_content(stack_a, -offset);
}
