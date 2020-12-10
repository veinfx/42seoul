/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 06:45:36 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/02 13:51:44 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int a = 10;
	int b = 5;
	int div;
	int mod;

	ft_div_mod(a, b, &div, &mod );
	
	printf("%d\n", div);
	printf("%d\n", mod);
	
	return 0;
}
