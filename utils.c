/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 14:39:39 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/23 15:41:12 by anaouali         ###   ########.fr       */
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

long	ft_atoi(char *str)
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

int	ft_isaout(char *str)
{
	char	*aout;
	int		i;

	i = 0;
	aout = "a.out";
	while (str[i] == aout[i] && str[i] != '\0')
	{
		if (str[i] == '\0')
			return (1);
		i++;
	}
	return (0);
}

int	tl(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
