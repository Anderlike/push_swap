/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 14:47:17 by aaleixo-          #+#    #+#             */
/*   Updated: 2024/10/25 14:47:17 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_swap(n_stack *stack_A, n_stack *stack_B)
{
    if(ft_lstsize(stack_A) <= 5)
        simple(&stack_A, &stack_B);
    else
        radix(&stack_A, &stack_B);
}

n_stack *stack_fill(int argc, char **argv, n_stack *stack_A)
{
    int i;
    n_stack *new;
    n_stack *tmp;

    i = 1;
    while (i < argc)
    {
        new = malloc(sizeof(n_stack));
        new->content = ft_atoi(argv[i]);
        new->index = i;
        new->next = NULL;
        if (stack_A == NULL)
            stack_A = new;
        else
        {
            tmp = stack_A;
            while (tmp->next != NULL)
                tmp = tmp->next;
            tmp->next = new;
        }
        i++;
    }
    return (stack_A);
}

int main(int argc, char **argv)
{
    n_stack *stack_A;
    n_stack *stack_B;

    if (argc < 2)
        return (0);

    stack_A = NULL;
    stack_B = NULL;
    stack_A = stack_fill(argc, argv, stack_A);
    push_swap(stack_A, stack_B);
    return (0);
}