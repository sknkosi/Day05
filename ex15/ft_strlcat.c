/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:50:18 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 09:51:18 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int *ft_strlcat(char *dest, char *src, unsigned int size)
{
  unsigned int d_length;
  unsigned int i;
  
  d_length = -1;
  while (dest[++d_length]);
  
  i = 0;
  while (src[i])
  {
    if (d_length < size - 1)
      dest[d_length] = src[i];
    d_length++;
    i++;
  }
  dest[d_length - 1] = '\0';

  return (dest);
}
