/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:24:29 by atabi             #+#    #+#             */
/*   Updated: 2022/03/17 19:31:36 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	print(char c)
{
	write(1, &c, 1);
}

int	tail(int c)
{
	int i;
	
	i = 10;
	while(c)
	{
		c /= 10;
		i *= 10;
	}
	return (i);
}

void	ft_putnbr(int nb)
{
//	long	l;
	int	i;

	i = tail(nb);

//	l = (long)nb;
//	if (l < 0)
//		print('-');
//	printf("%d", tail(nb));i

	while (nb / i && i != 1)
	{
		while (n <= i)
		{
			n = 10;
			print(nb % n + '0');
			n *= 10;

			if (n == i)
				nb % 10;
		}

	}

	

}

int	main(void)
{
	int v = 2022;

	ft_putnbr(v);

	return (0);
}
