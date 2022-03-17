/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:07:15 by atabi             #+#    #+#             */
/*   Updated: 2022/03/15 21:49:57 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] > '~')
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char	c[] = " 5644354`";
	c[0] = 1;

	printf("%s %d", c, ft_str_is_printable(c));

	return (0);
}*/
