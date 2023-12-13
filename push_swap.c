/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:19:29 by anaouali          #+#    #+#             */
/*   Updated: 2023/12/13 15:45:18 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
int	ft_issign(int c)
{
	if (c == '-' || c == '+')
		return (1);
	return (0);
}

long int	ft_atoi(char *str)
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

int	ft_check_int(char *argv)
{
	int	i;

	i = 0;
	if (ft_issign(argv[i]))
		i++;
	if (ft_atoi(argv) < -2147483648 || ft_atoi(argv) > 2147483647)
		return (0);
	while (argv[i])
	{
		if (!ft_isdigit(argv[i]))
			return (0);
		else
			i++;
	}
	return (1);
}

int	ft_check(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (ft_check_int(argv[i]))
			i++;
		else
			return (0);
	}
	return (1);
}

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	ft_check(argc, argv);
}
// checker les doublons
// checker les signes positif