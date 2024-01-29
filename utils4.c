/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 18:58:46 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/29 19:10:48 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	setto_zero(t_list *b)
{
	while (b)
	{
		b->cheapest = 0;
		b = b->next;
	}
	return ;
}

void	pricring(t_list *a, t_list *b, int len_a, int len_b)
{
	if (b->under_mediane == 1)
		b->price = b->position;
	if (b->under_mediane == 2)
		b->price = (len_b) - (b->position);
	if (b->target->under_mediane == 1)
		b->price += b->target->position;
	else
		b->price += len_a - (b->target->position);
}

void	top_itbis(t_list **a, t_list **b, t_list *cheapest)
{
	while (cheapest->under_mediane == 1 && cheapest->target->under_mediane == 2
		&& (((*b)->position) >= (lst_size(*a) / 2))
		&& lst_size(*b) > lst_size(*a))
	{
		rr(a, b);
		init(*a, *b);
	}
	while (cheapest->under_mediane == 2 && cheapest->target->under_mediane == 1
		&& ((*a)->position) >= (lst_size(*b) / 2)
		&& lst_size(*b) < lst_size(*a))
	{
		rr(a, b);
		init(*a, *b);
	}
}

int check_overflow(char *str)
{
    if (str_size(str) > 11)
        if (ft_atoi(str) > 2147483647)
            return(0);
    return(1);
}