/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:52:20 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 09:53:45 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy (char * dest, char * src, unsigned int size)
{
   unsigned int i = 0;
   
  while(src[i] != '\0' && i < (size - 1))
  {
      dest[i] = src[i];
      i++; 
  }

  dest[i] = '\0';

  i = 0;
  
  while(src[i] != '\0')
  {  
   i++;
  }
  int src_length = i;

  return src_length;
}
