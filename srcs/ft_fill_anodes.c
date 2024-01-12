/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_anodes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:10:33 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/12 16:29:59 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_get_atarget(t_stack *a, t_stack *b)
{
	t_stack	*tmp_b;
	t_stack	*target;
	long	closest_small;

	while (a)
	{
		closest_small = -2147483649;
		tmp_b = b;
		while (tmp_b)
		{
			if (tmp_b->nbr > closest_small && tmp_b->nbr < a->nbr)
			{
				closest_small = tmp_b->nbr;
				target = tmp_b;
			}
			tmp_b = tmp_b->next;
		}
		if (closest_small == -2147483649)
			a->target = ft_get_max_node(b);
		else
			a->target = target;
		a = a->next;
	}
}

void	ft_get_cost(t_stack *a, t_stack *b)
{
	int	size_a;
	int	size_b;

	size_a = ft_stack_size(a);
	size_b = ft_stack_size(b);
	while (a)
	{
		a->cost = a->index;
		if (!(a->over_med))
			a->cost = size_a - (a->index);
		if (a->target->over_med)
			a->cost += a->target->index;
		else
			a->cost += size_b - (a->target->index);
		a = a->next;
	}
}

void	ft_find_cheap_node(t_stack *stack)
{
	t_stack	*cheap_node;
	long	cheap_node_value;

	if (!stack)
		return ;
	cheap_node_value = 2147483648;
	while (stack)
	{
		if (stack->cost < cheap_node_value)
		{
			cheap_node_value = stack->cost;
			cheap_node = stack;
		}
		stack = stack->next;
	}
	cheap_node->cheap = true;
}

void	ft_fill_nodes_a(t_stack *a, t_stack *b)
{
	ft_get_index(a);
	ft_get_index(b);
	ft_get_atarget(a, b);
	ft_get_cost(a, b);
	ft_find_cheap_node(a);
}
