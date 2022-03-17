/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 22:28:19 by atabi             #+#    #+#             */
/*   Updated: 2022/03/16 14:42:34 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*down(char *string, int n)
{
	int	i;

	i = 0;
	while (string[i] != '\0')
	{
		if (string[i] >= 'A' && string[i] <= 'Z')
			string[i] += n;
		i++;
	}
	return (string);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	diff;

	diff = (int)('a' - 'A');
	down(str, diff);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 'a' && str[i] <= 'z')
			str[0] -= diff;
		else if (!((str[i] <= 'z' && str[i] >= 'a')
				|| (str[i] <= 'Z' && str[i] >= 'A')
				|| (str[i] <= '9' && str[i] >= '0')))
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
				str[i + 1] -= diff;
		}
		i++;
	}
	return (str);
}
/*
int	main(void)
{
	char	c[] = "salut, coMMent tu vas ? 42mots quARante-deux; cinquante+et+un";

	printf("%s", ft_strcapitalize(c));

	return(0);
}*/
