/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sungwpar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/02 22:29:03 by sungwpar          #+#    #+#             */
/*   Updated: 2020/12/02 22:53:54 by sungwpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char		*ft_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest) // dest 문자열의 문자열 끝(널) 을 찾는다.
		dest++;
	
	while ((*dest++ = *src++) != '\0') //dest 문자열 끝에서 부터 src문자열을 계속복사
		*dest = '\0';
		return temp;				//src 문자열의 마지막 null까지 복사한후,루프 종료
}
int main()
{
	char str1[15] = "Hello";
	char str2[] = "Seoul";

	//strcat
	ft_strcat(str1, str2);
	printf("strcat : %s\n", str1);

   //strncat
//	strncat(str1, str2, 3);
//	printf("strncat : %s\n", str1);

	return 0;
}
