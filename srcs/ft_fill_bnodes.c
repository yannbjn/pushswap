/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_bnodes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:11:29 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/17 13:15:15 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_get_btarget(t_stack *a, t_stack *b)
{
	t_stack	*tmp_a;
	t_stack	*target;
	long	closest_big;

	while (b)
	{
		closest_big = 2147483648;
		tmp_a = a;
		while (tmp_a)
		{
			if (tmp_a->nbr < closest_big && tmp_a->nbr > b->nbr)
			{
				closest_big = tmp_a->nbr;
				target = tmp_a;
			}
			tmp_a = tmp_a->next;
		}
		if (closest_big == 2147483648)
			b->target = ft_get_min_node(a);
		else
			b->target = target;
		b = b->next;
	}
}

void	ft_get_bcost(t_stack *a, t_stack *b)
{
	int	size_a;
	int	size_b;

	size_a = ft_stack_size(a);
	size_b = ft_stack_size(b);
	while (b)
	{
		b->cost = 0;
		if (b->over_med && b->target->over_med)
			b->cost = b->index + b->target->index;
		if (b->over_med && !(b->target->over_med))
			b->cost = b->index + (size_a - (b->target->index));
		if (!(b->over_med) && !(b->target->over_med))
			b->cost = (size_b - b->index) + (size_a - (b->target->index));
		if (!(b->over_med) && b->target->over_med)
			b->cost = (size_b - b->index) + b->target->index;
		b = b->next;
	}
}

void	ft_fill_nodes_b(t_stack *a, t_stack *b)
{
	ft_get_index(a);
	ft_get_index(b);
	ft_get_btarget(a, b);
	ft_get_bcost(a, b);
	ft_find_cheap_node(b);
}
