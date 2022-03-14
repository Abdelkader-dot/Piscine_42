/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 16:47:55 by atabi             #+#    #+#             */
/*   Updated: 2022/03/14 17:57:56 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	x;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			x = 1;
		else
			return (0);
		i++;
	}
	return (x);
}
/*
int	main(void)
{
	char	c[] = "4  3";
	int	x;

	x = ft_str_is_numeric(c);

	printf("%d", x);
	return (0);
}*/
