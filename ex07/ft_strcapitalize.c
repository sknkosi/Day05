/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:13:02 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 09:15:47 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The function capitalizes the first letter of each word and transforms all
other letters to lowercase.*/

char *ft_strcapitalize(char *str)
{
  int i;

  i = 0;
  ft_strlowcase(str);
  while(str[i])
  {
    if (str[0] >= 'a' && str[0] <= 'z')
        str[0] = str[0] - 32;
    else if (str[i] == ' '||str[i]=='+'||str[i]=='-')
      if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
        str[i + 1] = str[i + 1] - 32;
  i++;
  }
  return(str);
}
