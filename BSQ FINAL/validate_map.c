/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validate_map.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcastelo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:45:52 by rcastelo          #+#    #+#             */
/*   Updated: 2023/08/15 17:46:13 by rcastelo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	how_many_numbers(char *buffer);
int	check_number(char *buffer, int *i, int numbers);
int	get_char_set(char *buffer, int *i);
int	check_lines(char *buffer, int *i);

int	validate_map(char *buffer)
{
	int	i;

	i = 0;
	if (check_number(buffer, &i, how_many_numbers(buffer)) == 1)
		return (1);
	if (get_char_set(buffer, &i) == 1)
		return (1);
	if (check_lines(buffer, &i) == 1)
		return (1);
	return (0);
}
