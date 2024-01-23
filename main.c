/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 14:29:04 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/23 15:10:59 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list *a;
	t_list *b;

	b = malloc(sizeof(t_list));
	if (!b)
		return (0);
	if (argc == 1)
		return (0);void	algopswp(t_list **a, t_list **b)

	if (!ft_check(argc, argv))
		return (0);
	ft_stock(argc, argv, &a);
	while (*b)
	{
		intit(*a, *b);
		top_it(a, b);
	}
	printf("|----------------------------------------------|\n");
	printf("                         A                       \n");
	printf("|----------------------------------------------|\n");
	while (a)
	{
		if (a)
		{
			printf("content : %ld ", a->content);
			printf("mediane : %ld ", a->under_mediane);
			printf("position : %ld ", a->position);
			printf("price : %ld", a->price);
			printf("\n");
			a = a->next;
		}
	}
	printf("                                  B                                    \n");
	printf("|--------------------------------------------------------------------|\n");
	while (b->next)
	{
		if (b)
		{
			printf("content : %ld ", b->content);
			printf("mediane : %ld ", b->under_mediane);
			printf("position : %ld ", b->position);
			printf("target : %ld ", b->target->content);
			printf("price : %ld ", b->price);
			printf("cheapest : %ld", b->cheapest);

			b = b->next;
			printf("\n");
		}
	}
}

INT_MAX
INT_MIN