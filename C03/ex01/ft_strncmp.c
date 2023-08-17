/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaires-b <aaires-b@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 18:44:01 by aaires-b          #+#    #+#             */
/*   Updated: 2023/08/01 09:49:30 by aaires-b         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s2[i] != '\0' && s1[i] != '\0') && i < n)
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n && ((s1[i] == '\0' && s2[i] != '\0') || \
							(s1[i] != '\0' && s2[i] == '\0')))
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}

/*int main()
{
	char s1[] = "anabel";
	char s2[] = "anabeo";
	unsigned int n;
	
	n = 4;
	printf("%d", ft_strncmp(s1, s2, n));
}*/
