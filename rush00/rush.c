/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/21 16:15:09 by sungwpar          #+#    #+#             */
/*   Updated: 2020/11/22 16:27:43 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void 	rush(int x, int y)
{
	int i;
	int j;

	i = 1;
	j = 1;

	while (j <= y)
	{
		while (i <= x)
		{
			if(i == 1 || i == x )
				ft_putchar('o');

			else
				ft_putchar('-');
			i++;
		}
		while (j > 1)
		{
			if(i == 1 || i == x)
				ft_putchar('|');
			else
				ft_puchar('a');
		}
		ft_putchar('\n');
		j++;
		
	}
}
