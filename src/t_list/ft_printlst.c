/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printlst.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 15:45:33 by dmatavel          #+#    #+#             */
/*   Updated: 2023/02/02 11:04:05 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_printlst(t_list *lst)
{
	t_list	*tmp;

	if (!lst)
		return ;
	tmp = lst;
	while (tmp != NULL)
	{
		if (tmp->next == NULL)
			ft_printf("%d\n", tmp->content);
		else
			ft_printf("%d, ", tmp->content);
		tmp = tmp->next;
	}
}
