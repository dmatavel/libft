/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmatavel <dmatavel@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 13:42:57 by dmatavel          #+#    #+#             */
/*   Updated: 2023/01/20 16:32:07 by dmatavel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t ft_lstsize(t_list *lst)
{
    size_t i;

    if (!lst)
        return (0);
    i = 0;
    while (lst)
    {
        lst = lst->next;
        i++;
    }
    return (i);
}