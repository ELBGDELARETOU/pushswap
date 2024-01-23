/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:39:54 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/23 15:58:45 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_doubles(int argc, char **argv, int check)
{
	int	i;
	int	j;

	i = 1;
	if (check == 1)
		i = 0;
	j = i + 1;
	if (ft_isaout(argv[i]))
		i++;
	while (i < argc)
	{
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
				return (0);
			j++;
		}
		i++;
		j = i + 1;
	}
	return (1);
}

int	ft_check_letters(int argc, char **argv, int check)
{
	int	i;

	i = 1;
	if (check == 1)
		i = 0;
	if (ft_isaout(argv[i]))
		i++;
	while (argc > i)
	{
		if (!(ft_atoi(argv[i]) >= -2147483647 && ft_atoi(argv[i]) <= 2147483647))
			return (0);
		else if (!ft_isalpha(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check(int argc, char **argv)
{
	char	**r;

	if (argc == 1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	if (argc == 2)
	{
		r = ft_split(argv[1], ' ');
		if (!ft_check_doubles(tl(r), r, 1) || !ft_check_letters(tl(r), r, 1))
		{
			write(2, "Error\n", 6);
			return (0);
		}
		return (1);
	}
	else if (!ft_check_doubles(argc, argv, 3) || !ft_check_letters(argc, argv,
			3))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	else
		return (1);
}
