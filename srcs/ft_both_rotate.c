/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_both_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 18:52:10 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/14 18:58:41 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_arotate_both(t_stack **a, t_stack **b, t_stack *cheapest)
{
	while (*a != cheapest && *b != cheapest->target)
		ft_rr(a, b);
	ft_get_index(*a);
	ft_get_index(*b);
}

void	ft_arev_rotate_both(t_stack **a, t_stack **b, t_stack *cheapest)
{
	while (*a != cheapest && *b != cheapest->target)
		ft_rrr(a, b);
	ft_get_index(*a);
	ft_get_index(*b);
}

void	ft_brotate_both(t_stack **a, t_stack **b, t_stack *bcheapest)
{
	while (*b != bcheapest && *a != bcheapest->target)
		ft_rr(a, b);
	ft_get_index(*a);
	ft_get_index(*b);
}

void	ft_brev_rotate_both(t_stack **a, t_stack **b, t_stack *bcheapest)
{
	while (*b != bcheapest && *a != bcheapest->target)
		ft_rrr(a, b);
	ft_get_index(*a);
	ft_get_index(*b);
}
