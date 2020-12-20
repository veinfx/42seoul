/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/01 01:22:23 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/01 04:34:32 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_sort_int_tab(int *tab, int size)
{
	int		i;
	int		j;
	int		swap;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[i])
			{
				swap = tab[i];
				tab[i] = tab[j];
				tab[j] = swap;
			}
			j++;
		}
		i++;
	}
}

in		 main()
{
	int i;

	int num[6] = {2,4,3,1,6,7};

	i = 0;

	ft_sort_int_tab(num, 6);
	while (i < 6)
	{
		printf("%d",num[i]);
		i++;
	}
}
