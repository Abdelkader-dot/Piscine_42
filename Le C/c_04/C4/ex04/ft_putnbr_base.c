/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 22:09:28 by atabi             #+#    #+#             */
/*   Updated: 2022/03/20 00:04:39 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	checkBase(char *c)
{
	int	i;
	int	j;

	if (c[0] == '\0')
		return (0);
	else if (c[1] == '\0')
		return (0);

	i = 0;
	while (c[i] != '\0')
	{
		if (c[i] == '+' || c[i] == '-')
			return (0);
		j = i +1;
		while (c[j] != '\0')	
		{
			if (c[j] == c[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (checkBase(base) == 0)
		return;
	int	i;
	int	j;
	int	tab[100];

	i = ft_strlen(base);

	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr *= -1; 
	}
	j = 0;
	while (nbr != 0)
	{
		tab[j] = nbr % i;
		nbr = nbr / i;
		j++;
	}
	while (j > 0)
	{
		j--;
		write(1, &base[tab[j]], 1);
	}
	return;
}
/*
int	main(void)
{
	int n = 1000;
	char b[] = "0123456789abcdef";

	ft_putnbr_base(n, b);
	return (0);
}*/





















