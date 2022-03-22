/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 03:59:52 by atabi             #+#    #+#             */
/*   Updated: 2022/03/21 13:13:22 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 2)
		return (index);
	else
		return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}

int 	main(void)
{
	int	n;
	int	i;

	n = 5;

	i = 0;
	while (i < n)
	{
		printf("%d ", ft_fibonacci(i));
		i++;
	}
	return (0);
}
