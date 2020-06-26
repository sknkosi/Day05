/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:06:13 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 09:11:42 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The function transforms every letter of every word to lowercase.*/

char *ft_strlowcase(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
		  	    printf("%c\n", str[i]);

			str[i] += 32;
		}
		i++;
	}
	return (str);
}
