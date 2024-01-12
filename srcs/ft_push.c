/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:57:24 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/11 17:35:51 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_push(t_stack **dst, t_stack **src)
{
	t_stack	*tmp_node;

	tmp_node = *src;
	*src = (*src)->next;
	if (*dst == NULL)
	{
		*dst = tmp_node;
		tmp_node->next = NULL;
	}
	else
	{
		tmp_node->next = *dst;
		*dst = tmp_node;
	}
}

void	ft_pb(t_stack **b, t_stack **a)
{
	ft_push(b, a);
	write(1, "pb\n", 3);
}

void	ft_pa(t_stack **a, t_stack **b)
{
	ft_push(a, b);
	write(1, "pa\n", 3);
}
