/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:29:21 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/23 09:57:11 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void    ft_lstadd_back(t_list **lst, t_list *new)
{
    t_list  *tmp;

    if (!*lst || !lst)
    {
        *lst = new;
        return ;
    }
    tmp = *lst;
    tmp = ft_lstlast(tmp);
    tmp->next = new;
}
