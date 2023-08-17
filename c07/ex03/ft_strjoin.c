/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 15:10:01 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/13 14:39:54 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	strlength(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_count(int size, char **strs, char *sep)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (i < size)
	{
		count += strlength(strs[i]);
		i++;
	}
	count += (size - 1) * strlength(sep);
	return (count);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*tmp;
	int		i;

	i = 0;
	if (size == 0)
	{
		tmp = malloc(1);
		tmp[0] = 0;
		return (tmp);
	}
	tmp = (char *)malloc(sizeof(char) * (ft_count(size, strs, sep) + 1));
	if (tmp == NULL)
		return ((char *) NULL);
	tmp[0] = 0;
	i = 0;
	while (i < (2 * size) - 1)
	{
		if (i % 2 == 0)
			tmp = ft_strcat(tmp, strs[i / 2]);
		else
			tmp = ft_strcat(tmp, sep);
		i++;
	}
	return (tmp);
}

int	main(void)
{
	char	*strs[3];
	char	*sep;
	int		size;

	sep = ",";
	size = 3; 
	strs[0] = "ana";
	strs[1] = "bel";
	strs[2] = "rogerio";
	printf("%s", ft_strjoin(size, strs, sep));
}
