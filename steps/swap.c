/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:41:23 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/12 11:00:33 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

int	swap(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*next;
	int		tmp_val;
	int		tmp_index;

	if (ft_lstsize(*stack_a) < 2)
		return (-1);
	tmp = *stack_a;
	next = tmp->next;
	if (!tmp && !next)
		return (-1);
	tmp_val = tmp->content;
	tmp_index = tmp->index;
	tmp->content = next->content;
	tmp->index = next->index;
	next->content = tmp_val;
	next->index = tmp_index;
	return (0);
}

int	sa(t_list **stack_a)
{
	if (swap(stack_a) == -1)
		return (-1);
	ft_printf("sa\n");
	return (0);
}

int	sb(t_list **stack_b)
{
	if (swap(stack_b) == -1)
		return (-1);
	ft_printf("sb\n");
	return (0);
}

int	ss(t_list **stack_a, t_list **stack_b)
{
	if (swap(stack_a) == -1 || swap(stack_b) == -1)
		return (-1);
	ft_printf("ss\n");
	return (0);
}
