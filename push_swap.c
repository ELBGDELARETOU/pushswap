/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:19:29 by anaouali          #+#    #+#             */
/*   Updated: 2023/12/27 18:36:55 by anaouali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stock(int argc, char **argv, t_list **list)
{
	t_list	*new;
	t_list	*current;
	int		i;

	i = 1;
	*list = NULL;
	while (i < argc)
	{
		new = malloc(sizeof(t_list));
		if (!new)
			return ;
		new->content = ft_atoi(argv[i]);
		new->next = NULL;
		if (*list == NULL)
		{
			*list = new;
			current = *list;
		}
		else
		{
			current->next = new;
			current = new;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	if (argc == 1)
		return (0);
	// ft_check(argc, argv);
	ft_stock(argc, argv, &a);
	// ft_algo(&a, &b);
	// swap_a(&a);
	// push_a(&a, &b);
	// printf("%d ", b->content);
	// rotate_a(&a);
	// printf ("%d", check_end(a, b));
	ft_algo3(&a, &b);
	printf("a  ");
	printf("b\n----\n");
	while (a || b)
	{
		if (a)
		{
			printf("%d  ", a->content);
			a = a->next;
			if (!a && b)
				printf("%d\n", b->content);
			if (!b)
				printf("\n");
		}
		if (!a)
			printf("   ");
		if (b)
		{
			printf("%d\n", b->content);
			// printf(": target %d\n", b->target);
			b = b->next;
		}
	}
}
