/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaleixo- <aaleixo-@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:58:07 by aaleixo-          #+#    #+#             */
/*   Updated: 2025/02/17 17:16:36 by aaleixo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../lib/push_swap.h"

void	ft_error(void)
{
	ft_printf("Error\n");
	exit(0);
}

static int	ft_contains(int num, char **argv, int i)
{
	i++;
	while (argv[i])
	{
		if (ft_atoi(argv[i]) == num)
			return (1);
		i++;
	}
	return (0);
}

static int	ft_isnum(char *num)
{
	int	i;

	i = 0;
	if (num[0] == '-')
		i++;
	while (num[i])
	{
		if (!ft_isdigit(num[i]))
			return (0);
		i++;
	}
	return (1);
}

void	ft_check_args(int argc, char **argv)
{
	int		i;
	char	**args;

	i = 0;
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
	}
	else
	{
		i = 1;
		args = argv;
	}
	while (args[i])
	{
		if (!ft_isnum(args[i]) || ft_contains(ft_atoi(args[i]), args, i)
			|| ((ft_atoi(args[i]) < INT_MIN || ft_atoi(args[i]) > INT_MAX)))
		{
			ft_free(args);
			ft_error();
		}
		i++;
	}
	if (argc == 2)
		ft_free(args);
}
