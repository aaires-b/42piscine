/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 19:02:35 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/08 23:13:27 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	strlength(char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		src_size;
	char	*tmp;
	int		i;

	i = 0;
	src_size = strlength(src);
	tmp = (char *)malloc((src_size + 1) * sizeof(char)); 
	if (tmp == NULL)
		return ((char *) NULL); 
	else
	{
		while (src[i])
		{
			tmp[i] = src[i];
			i++;
		}
		tmp[i] = '\0';
		return (tmp);
	}
}

/*int	main(void)
{
	char	*src;

	src = "54";
	printf("%s", ft_strdup(src));
}*/
