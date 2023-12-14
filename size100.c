/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size100.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:12:03 by yabejani          #+#    #+#             */
/*   Updated: 2023/12/14 15:12:14 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	size100(t_list *d)
{
	d->lsp = d->argc - 1;
	d->control = 0;
	d->percentage = 1;
	d->cont = 4;
	d->size_block = (d->argc / d->cont) / 2;
	d->argmax = d->argc;
	sortnum(d);
	changenum(d);
	if (d->argc >= 20)
		ordernums(d);
	else
		ordernums_peq(d);
}
