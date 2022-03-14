/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 11:40:46 by atabi             #+#    #+#             */
/*   Updated: 2022/03/14 14:34:53 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		if (src[i] = '\0')
		{
			dest[i] = '\0';
			return (*dest);
		}
	}
	dest[i] = '\0';
	return (*dest);
}
