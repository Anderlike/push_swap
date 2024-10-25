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

#include "ft_printf/ft_printf.h"
#include "ft_printf/Libft/libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>

typedef struct n_stack
{
    int				content;
    int                 index;
    struct n_stack	*next;
}				n_stack;

n_stack    *push_swap(n_stack *stack_A);
n_stack *stack_fill(int argc, char **argv, n_stack *stack_A);

#endif