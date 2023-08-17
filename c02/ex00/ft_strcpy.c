/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 00:55:01 by aaires-b          #+#    #+#             */
/*   Updated: 2023/07/30 18:23:14 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		dest ++;
		src ++;
	}
	*dest = '\0';
	return (ptr);
}

/*int main(void)
{
	char source[] = "Techie Delight";
	char destination[] ="hsjadma sjdjdjd";
 
    printf("%s\n", ft_strcpy(destination, source));
 
    return 0;
}
*/
