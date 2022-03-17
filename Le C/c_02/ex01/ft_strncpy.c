/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:40:46 by atabi             #+#    #+#             */
/*   Updated: 2022/03/16 19:29:13 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (n > i)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int     main(void)
{
	char d[25];
	char s[] = "8";
	unsigned int un = 20;

	
	printf("%s", ft_strncpy(d, s, un));

	return(0);
}*/
