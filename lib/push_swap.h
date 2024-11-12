/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:59:16 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/11/12 17:03:03 by aaleixo-         ###   ########.fr       */
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

void	push_swap(t_list **stack_a, t_list **stack_b);
int		swap(t_list **stack_a);
int		sa(t_list **stack_a);
int		sb(t_list **stack_b);
int		ss(t_list **stack_a, t_list **stack_b);
int		push(t_list **stack_src, t_list **stack_dest);
int		pa(t_list **stack_a, t_list **stack_b);
int		pb(t_list **stack_a, t_list **stack_b);
int		rotate(t_list **stack);
int		ra(t_list **stack_a);
int		rb(t_list **stack_b);
int		rr(t_list **stack_a, t_list **stack_b);
int		reverse_rotate(t_list **stack);
int		rra(t_list **stack_a);
int		rrb(t_list **stack_b);
int		rrr(t_list **stack_a, t_list **stack_b);
void	radix(t_list **stack_a, t_list **stack_b);
void	simple(t_list **stack_a, t_list **stack_b);
int		is_sorted(t_list **stack);
int		get_distance(t_list **stack, int index);
void	index_stack(t_list **stack);
void	free_stack(t_list **stack);
void	ft_free(char **str);
void	ft_check(int argc, char **argv);
void	ft_error(void);
int		get_min(t_list **stack, int val);
#endif