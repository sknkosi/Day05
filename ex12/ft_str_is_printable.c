/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:43:39 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 09:44:08 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
  int i;
  
  i = 0;
  while (str[i])
  {
    if (str[i] >= ' ' || str[i] <= '~');
      return (0);
    i++;
  }
  return (1);
}
