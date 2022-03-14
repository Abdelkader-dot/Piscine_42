/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 14:36:09 by atabi             #+#    #+#             */
/*   Updated: 2022/03/14 16:45:13 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z')
					|| (str[i] >= 'a' && str[i] <= 'z')
						|| (str[i] >= '0' && str[i] <= '9'))
		{
			i++;
		}
		else
			return (0);
	}
	return (1);
}
/*
int	main(void)
{
	int	x;
	char	c[] = "112121212212121211sjfjsdjdyi8kmdtk";
	//	ft_str_is_alpha(c);
	x = ft_str_is_alpha(c);
	printf("%d", x);
	return (0);
}*/
