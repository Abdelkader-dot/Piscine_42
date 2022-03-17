/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:11:32 by atabi             #+#    #+#             */
/*   Updated: 2022/03/16 13:58:34 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;
	int	diff;

	diff = (int)('a' - 'A');
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += diff;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	c[] = "AAGSHSS0000000000SJYJDGHMGH1111111111kbvcvig";

	printf("%s", ft_strlowcase(c));

	return (0);
}*/
