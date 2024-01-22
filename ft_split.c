/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 12:35:12 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/22 15:53:08 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	my_free_all(char **res, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		free(res[i]);
		i++;
	}
	free(res);
}

static int	ft_char_is_in_str(char const *str, char c)
{
	int	i;

	i = 0;
	if (c == str[i])
		return (1);
	return (0);
}

static int	ft_count_words(char const *str, char c)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] != c && str[i])
		{
			words++;
			while (str[i] != c && str[i] && str[i])
				i++;
		}
		else
			i++;
	}
	return (words);
}

static char	*ft_get_next_words(int *index, char const *str, char c)
{
	int		len;
	int		i;
	char	*res;

	i = -1;
	len = 0;
	while (ft_char_is_in_str(&str[*index], c))
		(*index)++;
	while (!ft_char_is_in_str(&str[*index + len], c) && str[*index + len])
		len++;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (++i < len)
	{
		res[i] = str[*index];
		*index += 1;
	}
	res[i] = 0;
	return (res);
}

char	**ft_split(char const *str, char c)
{
	int		i;
	int		j;
	int		cw;
	char	**res;

	i = -1;
	j = 0;
	if (!str)
		return (NULL);
	cw = ft_count_words(str, c);
	res = malloc((cw + 1) * sizeof(char *));
	if (!res)
		return (NULL);
	while (++i < cw)
	{
		res[i] = ft_get_next_words(&j, str, c);
		if (res[i] == NULL)
		{
			my_free_all(res, i);
			free(res);
			return (NULL);
		}
	}
	res[i] = NULL;
	return (res);
}
