/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   simple.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 11:54:26 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/10/28 11:54:26 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

static void sort_3_help(n_stack **stack_A, n_stack	*head, int min, int next_min)
{
	if (head->content == next_min)
	{
		if (head->next->content == min)
			sa(stack_A);
		else
			rra(stack_A);
	}
	else
	{
		if (head->next->content == min)
			ra(stack_A);
		else
		{
			sa(stack_A);
			rra(stack_A);
		}
	}
}

static void	sort_3(n_stack **stack_A)
{
	n_stack	*head;
	int		min;
	int		next_min;

	head = *stack_A;
	min = get_min(stack_A, -1);
	next_min = get_min(stack_A, min);
	if (is_sorted(stack_A))
		return ;
    if (head->content == min && head->next->content != next_min)
	{
		sa(stack_A);
		ra(stack_A);
	}
	else
		sort_3_help(stack_A, head, min, next_min);
}

static void	sort_4(n_stack **stack_A, n_stack **stack_B)
{
	int	distance;

	if (is_sorted(stack_A))
		return ;
	distance = get_distance(stack_A, get_min(stack_A, -1));
	if (distance == 1)
		ra(stack_A);
	else if (distance == 2)
	{
		ra(stack_A);
		ra(stack_A);
	}
	else if (distance == 3)
		rra(stack_A);
	if (is_sorted(stack_A))
		return ;
	pb(stack_A, stack_B);
	sort_3(stack_A);
	pa(stack_A, stack_B);
}

static void	sort_5(n_stack **stack_A, n_stack **stack_B)
{
	int	distance;

	distance = get_distance(stack_A, get_min(stack_A, -1));
	if (distance == 1)
		ra(stack_A);
	else if (distance == 2)
	{
		ra(stack_A);
		ra(stack_A);
	}
	else if (distance == 3)
	{
		rra(stack_A);
		rra(stack_A);
	}
	else if (distance == 4)
		rra(stack_A);
	if (is_sorted(stack_A))
		return ;
	pb(stack_A, stack_B);
	sort_4(stack_A, stack_B);
	pa(stack_A, stack_B);
}

void	simple(n_stack **stack_A, n_stack **stack_B)
{
	int	size;

	if (is_sorted(stack_A) || ft_lstsize(*stack_A) == 0
		|| ft_lstsize(*stack_A) == 1)
		return ;
	size = ft_lstsize(*stack_A);
	if (size == 2)
		sa(stack_A);
	else if (size == 3)
		sort_3(stack_A);
	else if (size == 4)
		sort_4(stack_A, stack_B);
	else if (size == 5)
		sort_5(stack_A, stack_B);
}
