/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_stack.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 18:55:50 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/16 19:12:24 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_add_back(t_stack **stack, t_stack *stack_new)
{
	if (!stack)
		return ;
	if (!*stack)
		*stack = stack_new;
	else
		(ft_last_node(*stack))->next = stack_new;
}

void	*ft_addvalue_stack(int newnbr)
{
	t_stack	*new;

	new = malloc(sizeof(t_stack));
	if (!new)
		return (NULL);
	new->nbr = newnbr;
	new->next = NULL;
	return (new);
}

void	ft_create_astack(t_stack **a, char **tab)
{
	long	i;

	i = 0;
	while (tab[i])
	{
		ft_add_back(a, ft_addvalue_stack(ft_atoi(tab[i])));
		i++;
	}
}
