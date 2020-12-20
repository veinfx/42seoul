/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <sungwpar@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/25 18:05:27 by sungwpar          #+#    #+#             */
/*   Updated: 2020/11/30 11:09:26 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_reverse_alphabet(void)
{
	char c;

	c = 122;
	while (c > 96)
	{
		write(1, &c, 1);
		c--;
	}
}
