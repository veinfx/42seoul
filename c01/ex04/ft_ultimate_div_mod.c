/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 06:47:21 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/02 13:55:15 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_ultimate_div_mod(int *a, int *b)
{
	int div;
	int mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

int main()
{
	int a = 10;
	int b = 5;
	int div;
	int mod;

	ft_ultimate_div_mod(&a, &b);

	printf("%d\n", a);
	printf("%d\n", b);

	return 0;
}
