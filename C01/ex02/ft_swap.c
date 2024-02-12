/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sojo <sojo@student.42berlin.de>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 13:05:06 by sojo              #+#    #+#             */
/*   Updated: 2023/07/27 14:14:26 by sojo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *p1, int *p2)
{
	int	store;

	store = *p1;
	*p1 = *p2;
	*p2 = store;
}
