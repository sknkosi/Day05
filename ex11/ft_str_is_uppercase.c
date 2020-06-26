/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sknkosi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:41:28 by sknkosi           #+#    #+#             */
/*   Updated: 2020/06/26 09:42:34 by sknkosi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int main()
{
 char str[] = "QWEQW";
// char to_find[] = "asdf";
// unsigned int n = 3;
 
 printf("%d", ft_str_is_uppercase(str));
 
 return(0);
}
int	ft_str_is_uppercase(char *str)
{
  int i;
  
  i = 0;
  while (str[i])
  {
    if (!(str[i] >= 'A' && str[i] <= 'Z'))
      return (0);
    i++;
  }
  return (1);
}
