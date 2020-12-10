/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 18:42:07 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/07 19:06:44 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

void		ft_putnbr(int nb)
{
	unsigned int i;

	i = 0;
	if (nb < 0)
	{
		ft_putchar('-');
		i = -nb;
	}
	else
		i = nb;
	if (i >= 10)
	{
		ft_putnbr(i / 10);
		i = i % 10;
	}
	ft_putchar(i + 48);
}
