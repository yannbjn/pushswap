/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:09:21 by yabejani          #+#    #+#             */
/*   Updated: 2023/12/14 15:09:25 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ra(t_list *d)
{
	int	i;

	i = 0;
	while (i + 1 < d->sia)
	{
		swap(&d->sa[i], &d->sa[i + 1]);
		i++;
	}
	write(1, "ra\n", 3);
}
