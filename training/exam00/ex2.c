/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex2.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:34:28 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/03 08:48:44 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcpy(char *dest, char *src)
{
	char *ptr;
	
	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
int main()
{
	char str[] = "anaaaaaa,lok;,l;,;,;,";
	char dest[] = "belmonte";

	printf("%s", ft_strcpy(dest, str));
}
