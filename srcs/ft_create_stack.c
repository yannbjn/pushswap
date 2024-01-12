/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:55:50 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/11 16:32:34 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_create_astack(t_stack **a, char **tab)
{
	t_stack	*node;
	t_stack	*last;
	int		i;

	i = 0;
	if (a == NULL || tab == NULL)
		return ;
	while (tab[i])
	{
		node = malloc(sizeof(t_stack));
		if (!node)
			ft_free_stack(a);
		node->nbr = ft_atoi(tab[i]);
		node->next = NULL;
		if (*a == NULL)
			*a = node;
		else
		{
			last = ft_last_node(*a);
			last->next = node;
		}
		i++;
	}
}
