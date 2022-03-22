/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 03:36:03 by atabi             #+#    #+#             */
/*   Updated: 2022/03/20 00:09:55 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_atoi(char *str)
{

	int	i;
	int	j;
	int	p;
	int	nb;

	i = 0;
	while(str[i] != '\0' && (str[i] == ' ' || str[i] == '\f' || str[i] == '\n'
			|| str[i] == '\r' || str[i] == '\t' || str[i] == '\v'))
		i++;
	
	p = 1;
	while(str[i] != '\0' && (str[i] == '-') || (str[i] == '+'))
	{
		if(str[i] == '-')
			p *= -1;
		i++;
	}
	nb = 0;
	while(str[i] != '\0')
	{
		if(str[i] >= '0' && str[i] <= '9')
			nb = nb * 10 + (int)(str[i] - '0');
		else
			return (nb * p);
		i++;
	}
	return (nb * p);
	
}
/*
int	main(int argc, char **argv)
{
 	ft_atoi(argv[1]);
	
	return (0);
}*/
