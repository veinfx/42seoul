/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/26 00:56:57 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/07 10:31:31 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_print_comb(void)
{
	char	comb[5];
	int		i;

	i = 0;
	comb[0] = '0';
	comb[3] = ',';
	comb[4] = ' ';
	while (comb[i] <= '7')
	{
		comb[1] = comb[0] + 1;
		while (comb[1] <= '8')
		{
			comb[2] = comb[1] + 1;
			while (comb[2] <= '9')
			{
				if (comb[0] == '7' && comb[1] == '8' && comb[2] == '9')
					write(1, &comb, 3);
				else
					write(1, &comb, 5);
				comb[2]++;
			}
			comb[1]++;
		}
		comb[0]++;
	}
}
