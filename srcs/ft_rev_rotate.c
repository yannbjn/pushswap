/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 13:36:35 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/12 16:25:01 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_rev_rotate(t_stack **stack)
{
	t_stack	*last;
	t_stack	*before_last;

	if (!*stack || !(*stack)->next)
		return ;
	last = ft_last_node(*stack);
	before_last = ft_beforelast_node(*stack);
	before_last->next = NULL;
	last->next = *stack;
	*stack = last;
}

void	ft_rra(t_stack **a)
{
	ft_rev_rotate(a);
	write(1, "rra\n", 4);
}

void	ft_rrb(t_stack **b)
{
	ft_rev_rotate(b);
	write(1, "rrb\n", 4);
}

void	ft_rrr(t_stack **a, t_stack **b)
{
	ft_rotate(a);
	ft_rotate(b);
	write(1, "rrr\n", 4);
}

void	ft_rev_rotate_both(t_stack **a, t_stack **b, t_stack *cheapest)
{
	while (*a != cheapest && *b != cheapest->target)
		ft_rrr(a, b);
	ft_get_index(*a);
	ft_get_index(*b);
}
