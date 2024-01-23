/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils_parse.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 14:06:25 by yabejani          #+#    #+#             */
/*   Updated: 2024/01/12 16:24:40 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/push_swap.h"

void	ft_error(void)
{
	write(2, "error\n", 6);
	exit(1);
}

long	ft_atol(const char *str)
{
	int					sign;
	int					i;
	long				res;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i])
	{
		res = res * 10 + (str[i] - 48);
		i++;
	}
	return (sign * res);
}

int	ft_check_int(char *str)
{
	int	i;

	i = 1;
	if (!(str[0] == '+' || str[0] == '-' || ft_isdigit(str[0])))
		return (0);
	if (ft_strlen(str) < 2 && !(ft_isdigit(str[0])))
		return (0);
	if ((str[0] == '-' || str[0] == '+') && !(ft_isdigit(str[1])))
		return (0);
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	ft_check_size(char	*str)
{
	long	num;

	num = ft_atol(str);
	if (num < INTMIN || num > INTMAX)
		return (0);
	return (1);
}
