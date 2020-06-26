/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:48:03 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 09:48:30 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, int nb)
{
  int d_length;
  int i;
  
  d_length = -1;
  while (dest[++d_length]);
  
  i = 0;
  while (i < nb)
  {
    dest[d_length] = src[i];
    i++;
    d_length++;
  }
  dest[d_length] = '\0';

  return (dest);
}
