/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   target.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/27 14:45:31 by anaouali          #+#    #+#             */
/*   Updated: 2023/12/27 15:04:08 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_target(t_list *a, t_list **b)
{
	int c;
    int tmp;

	c = 0;
	while ((*b)->next)
	{
		while (a->next)
		{
			tmp = (*b)->content - a->content;
			if (tmp < ((*b)->content) - a->content)
				tmp = (*b)->content - a->content;
            a = a->next;
		}
		tmp = (*b)->target;
        tmp = 0;
		(*b) = (*b)->next;
	}
}
