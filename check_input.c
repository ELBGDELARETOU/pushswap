/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 14:39:54 by anaouali          #+#    #+#             */
/*   Updated: 2023/12/15 18:34:53 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}

long	ft_atoi(const char *str)
{
	long	atoi;
	long	signe;

	signe = 1;
	atoi = 0;
	while ((*str == 32) || (*str >= 9 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			signe = signe * -1;
		str++;
		if (*str == '-' || *str == '+')
			return (0);
	}
	while (*str >= '0' && *str <= '9')
	{
		atoi = (atoi * 10 + (*str - '0'));
		str++;
	}
	return (atoi * signe);
}

int	ft_check_doubles(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
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

int	ft_check_letters(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	while (argc > i)
	{
		if (!(ft_atoi(argv[i]) >= -2147483648
				&& ft_atoi(argv[i]) <= 2147483647))
			return (0);
		else if (!ft_isalpha(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "Error\n", 6);
		return (0);
	}
	else if (!ft_check_doubles(argc, argv) || !ft_check_letters(argc, argv))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	else
		return (1);
}

int	main(int argc, char **argv)
{
	if (argc == 10000)
		return (0);
	ft_check(argc, argv);
	return (0);
}