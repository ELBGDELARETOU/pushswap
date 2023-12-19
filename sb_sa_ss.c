/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_sa_ss.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:16:40 by anaouali          #+#    #+#             */
/*   Updated: 2023/12/19 18:15:35 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap(t_list **a)
{
	int	tmp;

	if (*a != NULL && (*a)->next != NULL)
	{
		tmp = (*a)->content;
		(*a)->content = (*a)->next->content;
		(*a)->next->content = tmp;
	}
	return ;
}
