/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/29 07:20:50 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/01 00:45:43 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void		ft_rev_int_tab(int *tab, int size)
{
	int i;
	int temp;

	i = 0;
	while (i < size / 2) 	//바뀌는 횟수는 배열 항목의 개수의 절반만큼만 필요
	{
		temp = tab[i]; 	// 배열 왼쪽 i 와 오른쪽 size 항목을 교환
		tab[i] = tab[size - 1 - i];
		tab[size - 1 -i ] = temp;
		i++;
	}
}

int main()
{
	int i;

	int a[6] = {2,3,1,4,5,7};

	i = 0;

	ft_rev_int_tab(a, 6);
	while (i < 6)
	{
		printf("%d",a[i]);
		i++;
	}
}
