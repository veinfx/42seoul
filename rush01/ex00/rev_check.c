/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/28 15:56:56 by sungwpar          #+#    #+#             */
/*   Updated: 2020/11/28 23:48:05 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int comb_pool([Lbox][tn][Rbox])
{
	char n;
	int i;
	
	n = '1';
	i = 1;
	idx = 3;

	while (idx >= 0)
	{
		max_box = comb_pool[Lbox][tn][Rbox];
		--idx;
		{
			if (comb_pool[Lbox][tn][Rbox] > max_box && idx >= 0)
			{
				max_box = comb_pool[Lbox][tn][Rbox];
				
				n++;
			}
		}
	}
	n = Rbox;
	return 1;

	n != Rbox;
	retrun 0;
}
