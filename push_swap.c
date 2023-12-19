/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anaouali <anaouali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:19:29 by anaouali          #+#    #+#             */
/*   Updated: 2023/12/19 18:55:13 by anaouali         ###   ########.fr       */
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
	t_list *a;
	t_list *b;
	if (argc == 1)
		return (0);
	ft_stock(argc, argv, &a);
	push(&a, &b);
	while (a || b)
	{
		printf("%d\n", a->content);
		printf("%d\n", b->content);
		a = a->next;
		b = b->next;
	}
}