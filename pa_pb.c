/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_pb.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 15:17:53 by anaouali          #+#    #+#             */
/*   Updated: 2023/12/21 18:41:47 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **a, t_list **b)
{

	if (!*a)
		return ;
	*b = *a;
	*a = (*a)->next;
    (*b)->next = NULL;
}
void	push_b(t_list **a, t_list **b)
{

	if (!*a)
		return ;
	*b = *a;
	*a = (*a)->next;
    (*b)->next = NULL;
}