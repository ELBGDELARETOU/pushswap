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

void	set_target(t_list *a, t_list *b)
{
	t_list	*current_b;
	t_list	*current_a;

	while (b)
	{
        current_b = b;
		current_a = a;
        b->target = INT_MAX;
		while (current_a)
		{
            if (current_a->content > current_b->content && current_a->content < current_b->target)
                current_b->target = current_a->content;
			current_a = current_a->next;
		}
		if ((current_b->target == INT_MAX) && current_b->content == isthebiggest(current_b))
				current_b->target = isthesmallest(a);
		b = b->next;
		if (current_a)
			a = a->next;
	}
}

void set_price(t_list *a, t_list *b)
{
	long int i;
	long int len_b;
	
	len_b = lst_size(b);
	i = 0;
	while (b)
	{
		if (b->under_mediane == 1)
			b->price = (i++);
		if (b->under_mediane == 0)
			b->price = (--i);
		b = b->next;
	}
}

void set_cheapest(t_list *b)
{
	 
}
void	init(t_list *a, t_list *b)
{
	set_position(a);
	set_position(b);
	set_target(a, b);
	set_price(a, b);
	set_cheapest(b);
}