/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/20 19:59:38 by atabi             #+#    #+#             */
/*   Updated: 2022/03/21 12:50:20 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	x;
	int	tmp;

	if (nb < 0)
		return (0);
	else if (nb == 0)
		return (1);
	tmp = nb;
	x = 1;
	while (x < nb)
	{
		tmp *= x;
		x++;
	}
	return (tmp);
}
/*
int	main(void)
{
	int	n;

	n = -4;

	printf("%d", ft_iterative_factorial(n));
	return (0);
}*/
