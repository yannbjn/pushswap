/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bonus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:12:53 by yabejani          #+#    #+#             */
/*   Updated: 2023/12/14 15:12:55 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

void	swap(int *argv1, int *argv2)
{
	int	temp;

	temp = *argv1;
	*argv1 = *argv2;
	*argv2 = temp;
}
