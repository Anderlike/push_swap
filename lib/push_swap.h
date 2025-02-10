/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:59:16 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/02/10 12:54:10 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "ft_printf/Libft/libft.h"
# include "ft_printf/ft_printf.h"
# include <fcntl.h>
# include <limits.h>
# include <stdio.h>
# include <stdlib.h>

void	ft_error(void);
void	ft_check_args(int argc, char **argv);
int		is_sorted(t_list **stack);
int		get_distance(t_list **stack, int index);
int		get_min(t_list **stack, int val);
void	make_top(t_list **stack, int distance);
void	free_stack(t_list **stack);
void	ft_free(char **str);
void	print_list(t_list *head);
void	radix(t_list **stack_a, t_list **stack_b);
void	simple(t_list **stack_a, t_list **stack_b);
void	index_stack(t_list **stack);
int		swap(t_list **stack);
int		push(t_list **stack_to, t_list **stack_from);
int		rotate(t_list **stack);
int		reverse_rotate(t_list **stack);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_b, t_list **stack_a);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);

#endif