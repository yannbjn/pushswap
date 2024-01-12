/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 15:42:03 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/12 16:38:39 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sort(t_stack **a)
{
	t_stack	*b;

	b = NULL;
	if (ft_stack_size(*a) == 2)
		ft_sa(a);
	else if (ft_stack_size(*a) == 3)
		ft_sort_three(a);
	else
	{
		ft_sort_stacks(a, &b);
		ft_get_min_top(a);
	}
}

void	ft_sort_stacks(t_stack **a, t_stack **b)
{
	int	size_a;

	size_a = ft_stack_size(*a);
	if (size_a-- > 3)
		ft_pb(b, a);
	if (size_a-- > 3)
		ft_pb(b, a);
	while (size_a-- > 3)
	{
		ft_fill_nodes_a(*a, *b);
		ft_a_to_b(a, b);
	}
	ft_sort_three(a);
	while (*b)
	{
		ft_fill_nodes_b(*a, *b);
		ft_b_to_a(a, b);
	}
	ft_get_index(*a);
}

void	ft_a_to_b(t_stack **a, t_stack **b)
{
	t_stack	*cheapest;

	cheapest = ft_get_cheap_node(*a);
	if (cheapest->over_med && cheapest->target->over_med)
		ft_rotate_both(a, b, cheapest);
	else if (!(cheapest->over_med) && !(cheapest->target->over_med))
		ft_rev_rotate_both(a, b, cheapest);
	ft_move_node_top(a, cheapest, 'a');
	ft_move_node_top(b, cheapest->target, 'b');
	ft_pb(b, a);
}

void	ft_b_to_a(t_stack **a, t_stack **b)
{
	ft_move_node_top(a, (*b)->target, 'b');
	ft_pa(b, a);
}
