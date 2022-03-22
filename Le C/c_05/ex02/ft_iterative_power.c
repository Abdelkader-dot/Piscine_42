/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 00:03:18 by atabi             #+#    #+#             */
/*   Updated: 2022/03/21 02:15:33 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	sf;

	sf = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
	{
		i = 1;
		while (i < power)
		{
			nb *= sf;
			i++;
		}
	}
	return (nb);
}
/*
int	main(void)
{
	int	n;
	int	p;

	n = 2;
	p = -9;
	printf("%d", ft_iterative_power(n, p));
	return (0);
}*/
