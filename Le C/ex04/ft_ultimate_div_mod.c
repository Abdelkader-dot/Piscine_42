/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atabi <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 21:59:35 by atabi             #+#    #+#             */
/*   Updated: 2022/03/10 22:35:07 by atabi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;
	int	y;
	int	d;
	int	m;

	x = *a;
	y = *b;
	d = x / y;
	m = x % y;
	a = &d;
	b = &m;
}
