/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 16:25:28 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/12 16:23:55 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_sort_three(t_stack **a)
{
	t_stack	*max_node;

	max_node = ft_get_max_node(*a);
	if (*a == max_node)
		ft_ra(a);
	else if ((*a)->next == max_node)
		ft_rra(a);
	if ((*a)->nbr > (*a)->next->nbr)
		ft_sa(a);
}
