/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:21:39 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 09:25:20 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The function returns 1 if the string given as a parameter contains only
alphabetical characters, and 0 if it contains any other character.*/

int	ft_str_is_alpha(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') &&
				(str[i] < 'A' || str[i] > 'Z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
