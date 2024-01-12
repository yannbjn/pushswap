/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 17:37:46 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/12 18:03:36 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	a = NULL;
	if (argc == 1)
		exit(0);
	if (argc == 2)
		a = ft_one_arg(argv);
	else if (argc > 2)
		a = ft_multiple_args(argc, argv);
	if (ft_check_for_dup(a))
	{
		ft_free_stack(&a);
		ft_error();
	}
	if (!ft_check_if_sort(a))
		ft_sort(&a);
	ft_free_stack(&a);
	return (0);
}
