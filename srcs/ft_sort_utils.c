/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 14:16:59 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/15 11:48:02 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_get_index(t_stack *stack)
{
	int	i;
	int	med;

	i = 0;
	if (!stack)
		return ;
	med = ft_stack_size(stack) / 2;
	while (stack)
	{
		stack->index = i;
		if (i <= med)
			stack->over_med = true;
		else
			stack->over_med = false;
		stack = stack->next;
		i++;
	}
}

t_stack	*ft_get_cheap_node(t_stack *stack)
{
	if (!stack)
		return (NULL);
	while (stack)
	{
		if (stack->cheap)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	ft_move_node_top(t_stack **stack, t_stack *node, char name)
{
	while (*stack != node)
	{
		if (name == 'a')
		{
			if (node->over_med)
				ft_ra(stack);
			else
				ft_rra(stack);
		}
		else if (name == 'b')
		{
			if (node->over_med)
				ft_rb(stack);
			else
				ft_rrb(stack);
		}
	}
}

void	ft_get_min_top(t_stack **a)
{
	while ((*a)->nbr != ft_get_min_node(*a)->nbr)
	{
		if (ft_get_min_node(*a)->over_med)
			ft_ra(a);
		else
			ft_rra(a);
	}
}
