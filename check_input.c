/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:39:54 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/25 13:32:34 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_double(int argc, char **argv, int check)
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

int	ft_check_letter(int argc, char **argv, int check)
{
	int	i;

	i = 1;
	if (check == 1)
		i = 0;
	if (ft_isaout(argv[i]))
		i++;
	while (argc > i)
	{
		if (!(ft_atoi(argv[i]) >= -2147483647
				&& ft_atoi(argv[i]) <= 2147483647))
			return (0);
		else if (!ft_isalpha(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_one_arg(int argc, char **argv)
{
	char	**r;

	r = ft_split(argv[1], ' ');
	if (str_size(r) == 2)
	{
		my_free_all(r, str_size(r));
		return (0);
	}
	if (!ft_check_double(tl(r), r, 1) || !ft_check_letter(tl(r), r, 1))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	my_free_all(r, str_size(r));
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
		if (!ft_check_one_arg(argc, argv))
			return (0);
		else
			return (1);
	}
	if (!ft_check_double(argc, argv, 3) || !ft_check_letter(argc, argv, 3))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	return (1);
}
