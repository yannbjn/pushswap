/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   size500.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:12:22 by yabejani          #+#    #+#             */
/*   Updated: 2023/12/14 15:12:24 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	size500(t_list *d)
{
	d->lsp = d->argc -1;
	d->control = 0;
	d->percentage = 1;
	d->cont = 7;
	d->size_block = (d->argc / d->cont) / 2;
	d->argmax = d->argc;
	sortnum(d);
	changenum(d);
	ordernums(d);
}
