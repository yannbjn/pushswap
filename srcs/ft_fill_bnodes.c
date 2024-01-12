/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fill_bnodes.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 16:11:29 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/12 16:36:39 by yabejani         ###   ########.fr       */
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

void	ft_fill_nodes_b(t_stack *a, t_stack *b)
{
	ft_get_index(a);
	ft_get_index(b);
	ft_get_btarget(a, b);
}
