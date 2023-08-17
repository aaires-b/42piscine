/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex1a.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:24:51 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/03 08:24:19 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char *putrev(char *str)
{
	int	i;
	int len;
	char tmp;

	i = -1;
	len = 0;
	while (str[len])
		len++;
	while (i++ < --len)
	{
		tmp = str[i];
		str[i] = str[len];
		str[len] = tmp;
	}
	return (str);
}

int main()
{
	char str[] = " anabel";
 
	printf("%s", putrev(str));
}