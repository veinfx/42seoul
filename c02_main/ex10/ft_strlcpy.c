/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/05 14:25:39 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/05 15:00:36 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	
	i = 0;
	while (i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;

	i = 0;
	while (src[i] != 0)
		i++;
	return (i);
}

int main()
{

	char str[10] = "abcdefg";

	char src[10] = "abccd";

	ft_strlcpy(str, src, 3);

	printf("%s",str);

	return 0;

}
// size-1 만큼의 string 복사와 함께 NULL로 끝남을 보장
// 반환 값은 생성하려고 한 문자열의 길이 , 즉 src의 길이이다. 이때 길이는 null을 포함하지않는다.
