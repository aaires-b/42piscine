/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 11:07:10 by aaires-b          #+#    #+#             */
/*   Updated: 2023/07/30 16:37:52 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;

	i = 0; 
	while (i < size)
	{
		*dest = *src;
		i++;
	}
	*dest = '\0';
	return (i);
}

/*int main()
{
	char scr[] = "lisboa";
	char dest[] = "portot";

	printf("%d", ft_strlcpy(dest, scr, 6));
	
}
*/