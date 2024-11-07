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

#include "../lib/push_swap.h"

void	push_swap(n_stack **stack_A, n_stack **stack_B)
{
    if(ft_lstsize(*stack_A) <= 5)
        simple(stack_A, stack_B);
    else
    	radix(stack_A, stack_B);
}

static void stack_fill(int argc, char **argv, n_stack **stack)
{
	n_stack	*new;
	char	**args;
	int		i;

	i = 0;
	if (argc == 3)
		args = ft_split(argv[1], ' ');
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		new = ft_lstnew(ft_atoi(args[i]));
		ft_lstadd_back(stack, new);
		i++;
	}
	index_stack(stack);
	if (argc == 2)
		ft_free(args);
}

int main(int argc, char **argv)
{
    n_stack **stack_A;
    n_stack **stack_B;

    if (argc < 3)
        return (0);
    ft_check(argc, argv);
    stack_A = (n_stack **)malloc(sizeof(n_stack));
    stack_B = (n_stack **)malloc(sizeof(n_stack));
    stack_fill(argc, argv, stack_A);
    if (is_sorted(stack_A))
	{
		free_stack(stack_A);
		free_stack(stack_B);
		return (0);
	}
    push_swap(stack_A, stack_B);
    free_stack(stack_A);
	free_stack(stack_B);
    return (0);
}