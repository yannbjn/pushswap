/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:01:06 by yabejani          #+#    #+#             */
/*   Updated: 2023/12/14 15:01:09 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap_bonus.h"

int	check_args(char **args, int argc)
{
	int	i;

	i = -1;
	while (++i < argc)
	{
		if (check_num(args[i + 1]) == -1 || *args[i + 1] == '\0')
			return (-1);
	}
	return (0);
}
