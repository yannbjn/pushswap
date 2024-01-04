/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 18:19:18 by bedos-sa          #+#    #+#             */
/*   Updated: 2024/01/04 16:37:59 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

char    **input_error(int argc, char **argv)
{
    char    **split_argv;
	if (argc == 1)
		exit(0);
	split_argv = check_integers(argc, argv);
	//check_int_size(split_argv);
    return (split_argv);
}

char **check_integers(int argc, char **argv)
{
    int i;
    char **split_argv;
    int j;

    i = 1;
    while (i < argc)
    {
        split_argv = ft_split(argv[i], ' ');  // Use ft_split to split the string
        if (split_argv == NULL)
            print_error_and_exit();  // Handle memory allocation failure

        // Process each number in the split array
        j = 0;
        while (split_argv[j] != NULL)
        {
            check_integer(split_argv[j]);
            check_int_size(split_argv[j]);
            j++;
        }

        // Free the memory allocated by ft_split
        //free_tab(split_argv);

        i++;
    }
    return (split_argv);
}

void	check_integer(char *str)
{
    int j = 0;
    if (str[j] == '\0')
        print_error_and_exit();
    while (j < (int)ft_strlen(str))
    {
        if (!ft_isdigit(str[j]))
        {
            if (j == 0 && ft_strlen(str) != 1 && \
                (str[j] == '-' || str[j] == '+'))
            {
                j++;
                continue;
            }
            print_error_and_exit();
        }
        j++;
    }
}

void	check_int_size(char *str)
{
	long	num;
	//int		i;

	//i = 0;
	//while (str[i])
	//{
		num = ft_atol(str);
		if (num > INTMAX || num < INTMIN)
			print_error_and_exit();
		//i++;
	//}
}

void	check_for_doubles(t_stack_a *head_a)
{
	t_stack_a	*tmp;
	t_stack_a	*ptr;
	int			num;

	ptr = head_a;
	while (ptr != NULL)
	{
		tmp = ptr;
		num = tmp->content;
		tmp = tmp->next;
		while (tmp != NULL)
		{
			if (num == tmp->content)
			{
				ft_putstr_fd("Error\n", 2);
				ft_clearnodes_a(&head_a);
				exit(0);
			}
			tmp = tmp->next;
		}
		ptr = ptr->next;
	}
}

void	print_error_and_exit(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(0);
}
