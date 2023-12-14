/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:06:46 by yabejani          #+#    #+#             */
/*   Updated: 2023/12/14 15:06:48 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

void	pa(t_list *d)
{
	int	temp;
	int	i;

	temp = d->sb[0];
	i = -1;
	while (++i < (d->sib - 1))
		d->sb[i] = d->sb[i + 1];
	d->sib = d->sib - 1;
	i = d->sia;
	d->sia = d->sia + 1;
	while (--i >= 0)
		d->sa[i + 1] = d->sa[i];
	d->sa[0] = temp;
}
