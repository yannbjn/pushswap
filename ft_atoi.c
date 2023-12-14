/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabejani <yabejani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 15:03:21 by yabejani          #+#    #+#             */
/*   Updated: 2023/12/14 15:03:26 by yabejani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	ft_error(t_list *d, int nbr);

int	ft_atoi(const char *str, t_list *d)
{
	int				i;
	int				valorfinal;
	long long int	nbr;

	nbr = 0;
	i = 0;
	valorfinal = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			valorfinal = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + str[i] - '0';
		i++;
		if (nbr > ((long long int)INT_MAX + 1) && valorfinal == -1)
			return (ft_error(d, nbr));
		if (nbr > INT_MAX && valorfinal == 1)
			return (ft_error(d, nbr));
	}
	return (nbr * valorfinal);
}

int	ft_error(t_list *d, int nbr)
{
	nbr = 0;
	d->atoierror = 1;
	return (nbr);
}
