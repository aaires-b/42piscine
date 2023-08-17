/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:04:02 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/07 20:12:39 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	i;
	unsigned int	result;

	i = 0;
	j = 0;
	result = 0;
	while (dest[i] != '\0')
		i++;
	while (src[result] != '\0')
		result++;
	if (size <= i)
		result += size;
	else
		result += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (result);
}

int main ()
{
	char dest[] = "ana";
	char src[] = "belmonte";
	unsigned int size;

	printf("%d", ft_strlcat(dest, src, 2));
}
