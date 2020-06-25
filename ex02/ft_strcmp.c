/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 17:01:49 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/25 17:04:26 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find) 
{
  int i;
  int j;
  
  i = 0;
  j = 0;
  if (to_find[0] == '\0')
    return str;
  while (str[i] != '\0')
  {
    j = 0;
      while (str[i + j] == to_find[j])
      {
        if (to_find[j] == '\0')
          return (str+i);
        j++;
      }
    i++;
  }
  return ;
}
