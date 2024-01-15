/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ademnaouali <ademnaouali@student.42.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:19:29 by anaouali          #+#    #+#             */
/*   Updated: 2024/01/06 14:38:17 by ademnaouali      ###   ########.fr       */
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
	if (!ft_check(argc, argv))
		return 0;
	ft_stock(argc, argv, &a);
	algopswp(&a, &b);
	set_target(a, b);
	printf("a                                       "); 
	printf("b\n------------------------------------------\n");
	while (a || b)
	{
		if (a)
		{
			printf("content : %d ", a->content);
			printf("medaine : %d ", a->under_mediane);  
			printf("position : %d", a->position);
			printf("target : %d", a->target->content);
			a = a->next;
			if (!a && b)
				{
					printf("%d ", b->content);
					printf("%d\n", b->under_mediane);
					printf(" target %d\n", b->target->content);
				}
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
