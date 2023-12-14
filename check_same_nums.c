/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_same_nums.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:00:44 by yabejani          #+#    #+#             */
/*   Updated: 2023/12/14 15:04:37 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ft_check(t_list *d, int num, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		if (d->sa[i] == num)
			return (0);
		i++;
	}
	return (1);
}

int	check_same_nums(t_list *d)
{
	int	i;

	i = 0;
	while (i <= d->sia - 1)
	{
		if (ft_check(d, d->sa[i], i) == 1)
			i++;
		else
			return (-1);
	}
	return (0);
}
