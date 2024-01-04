/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 15:25:34 by bedos-sa          #+#    #+#             */
/*   Updated: 2024/01/04 16:17:30 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stacks	stacks;
	char		**split_argv;

	split_argv = input_error(argc, argv);
	stacks.head_a = create_list_a(split_argv);
	stacks.head_b = NULL;
	check_for_doubles(stacks.head_a);
	sorting(&stacks);
	free_for_all(&stacks);
}
