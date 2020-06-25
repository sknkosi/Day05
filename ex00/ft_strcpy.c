/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/25 13:35:06 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/25 16:13:01 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcpy(char *dest, char *scr)
{  
  int i;
 
  i = 0;
  while (scr[i] != '\0')
  {
    dest[i] = scr[i];
    i++;
  }

  dest[i] = '\0';

  printf("%s\n", dest);
  return (dest);
}
