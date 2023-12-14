/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_bonus.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:07:48 by yabejani          #+#    #+#             */
/*   Updated: 2023/12/14 15:07:49 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

void	pb(t_list *d)
{
	int	temp;
	int	i;

	temp = d->sa[0];
	i = -1;
	while (++i < (d->sia - 1))
		d->sa[i] = d->sa[i + 1];
	d->sia = d->sia - 1;
	i = d->sib;
	d->sib = d->sib + 1;
	while (--i >= 0)
		d->sb[i + 1] = d->sb[i];
	d->sb[0] = temp;
}
