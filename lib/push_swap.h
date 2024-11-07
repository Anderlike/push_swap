/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:59:16 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/10/25 14:59:16 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include "ft_printf/Libft/libft.h"
#include "ft_printf/ft_printf.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

void	push_swap(n_stack **stack_A, n_stack **stack_B);
int swap(n_stack **stack_A);
int sa(n_stack **stack_A);
int sb(n_stack **stack_B);
int ss(n_stack **stack_A, n_stack **stack_B);
int push(n_stack **stack_src, n_stack **stack_dest);
int pa(n_stack **stack_A, n_stack **stack_B);
int pb(n_stack **stack_A, n_stack **stack_B);
int rotate(n_stack **stack);
int ra(n_stack **stack_A);
int rb(n_stack **stack_B);
int rr(n_stack **stack_A, n_stack **stack_B);
int reverse_rotate(n_stack **stack);
int rra(n_stack **stack_A);
int rrb(n_stack **stack_B);
int rrr(n_stack **stack_A, n_stack **stack_B);
void radix(n_stack **stack_A, n_stack **stack_B);
void    simple(n_stack **stack_A, n_stack **stack_B);
int is_sorted(n_stack **stack);
int get_distance(n_stack **stack, int index);
void	index_stack(n_stack **stack);
void	free_stack(n_stack **stack);
void	ft_free(char **str);
void	ft_check(int argc, char **argv);
void	ft_error();
int	get_min(n_stack **stack, int val);
#endif