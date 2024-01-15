#include "push_swap.h"

void	set_position(t_list *a)
{
	int	i;
	int	mediane;

	if (!a)
		return ;
	mediane = lst_size(a) / 2;
	i = 0;
	while (a)
	{
		a->position = i;
		if (i <= mediane)
			a->under_mediane = 1;
		else
			a->under_mediane = 0;
		a = a->next;
		i++;
	}
}

// void set_target(t_list *a, t_list *b)
// {
//     t_list  *target;
//     t_list  *current_a;

//     cuerrent_a = a;
//     while (b)
//     {
//         while (a)
//         {
//             if (b->content > current_a->content && current_a->content)
//                 b->target->content = current_a->content;
//             if (b->content > current_a->content && )
//                 ;
//         }
//         a = a->next
//     }
// }

void	set_target(t_list *a, t_list *b)
{
	t_list	*current_b;

	while (b)
	{
        current_b = b;
        b->target = INT_MAX;
		while (a)
		{
            if (a->content > current_b->content && a->content < current_b->target)
                current_b->target = a->content;
			a = a->next;
		}
		b = b->next;
	}
}

void	init(t_list *a, t_list *b)
{
	set_position(a);
	set_position(b);
	set_target(a, b);
	// set_price(a, b);
	// set_cheapest(b);
}