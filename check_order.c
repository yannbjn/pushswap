/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_order.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:01:26 by yabejani          #+#    #+#             */
/*   Updated: 2023/12/14 15:01:31 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	check_order(t_list *d)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (j < d->argc - 1)
	{
		if (d->sa[j] < d->sa[j + 1])
			i++;
		j++;
	}
	if (i == j)
		return (-1);
	else
		return (0);
}
