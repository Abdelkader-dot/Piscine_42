/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 21:53:17 by atabi             #+#    #+#             */
/*   Updated: 2022/03/16 13:56:25 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;
	int	diff;

	diff = (int)('a' - 'A');
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - diff;
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	c[] = "abthsrth5555strjhsryjdry5555sryjdyjAAAAFFFFFFFFF";

	printf("%s", ft_strupcase(c));


	return (0);
}*/
