/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parsing.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 16:37:11 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/11 16:31:38 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

t_stack	*ft_one_arg(char **argv)
{
	char	**split_argv;
	t_stack	*a;
	int		i;

	split_argv = NULL;
	i = -1;
	split_argv = ft_split(argv[1], 32);
	while (split_argv[++i])
	{
		if (!ft_check_int(split_argv[i]) || !ft_check_size(split_argv[i]))
		{
			free_tab(split_argv);
			ft_error();
		}
	}
	ft_create_astack(&a, split_argv);
	free_tab(split_argv);
	return (a);
}

t_stack	*ft_multiple_args(int argc, char **argv)
{
	t_stack	*a;
	int		i;

	i = 1;
	while (i < argc)
	{
		if (!ft_check_int(argv[i]) || !ft_check_size(argv[i]))
			ft_error();
		i++;
	}
	ft_create_astack(&a, argv + 1);
	return (a);
}
