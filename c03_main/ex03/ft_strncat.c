/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:55:07 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/02 23:07:05 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *temp = dest;
	
	if (nb)
	{
		while (*dest) // dest 문자열의 문자열 끝(널)위치를 찾는다.
			dest++;
		
		while ((*dest++ = *src++) != '\0')
										//dest 문자열 끝에서 부터 src문자열을 nb 만큼 복사
		{
			if ( --nb == 0 )
			{
			//마지막에 널 바이트 넣는다.
				*dest = '\0';
				break;
			}
		}
	}
	return temp;			
}
int main()
{
	char str1[15] = "Hello";
	char str2[] = "Seoul";

	//strcat
//	ft_strcat(str1, str2);
//	printf("strcat : %s\n", str1);

   //strncat
	ft_strncat(str1, str2, 3);
	printf("strncat : %s\n", str1);
	
	return 0;
}
