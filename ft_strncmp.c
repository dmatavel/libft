/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 12:39:22 by dmatavel          #+#    #+#             */
/*   Updated: 2022/04/04 15:56:21 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
  unsigned int i;
  unsigned int j;

  i = 0;
  j = 0;
  while(i < n && s1[i] != '\0')
  {
    i++;
  }
  while(j < n && s2[j] != '\0')
  {
    j++;
  }
  if(i < j)
  {
    return (-1);
  }
  else if(i > j)
  {
    return (1);
  }
  else
  {
    return (0);
  }
}

#include <stdio.h>

int main(void)
{
  int ret;
  char str1[15] = "Hello, World!";
  char str2[15] = "Hello!";
  
  ret = ft_strncmp(str1, str2, 6);
  if(ret < 0)
  {
    printf("str1 is less than str2");
  }
  else if(ret > 0)
  {
    printf("str2 is less than str1");
  }
  else
  {
    printf("str1 is equal to str2");
  }
  return (0);
}
