/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <cpicon-m@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:08:06 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/07/11 09:55:57 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letra;

	if (n >= 0)
	{
		letra = 'P';
		write (1, &letra, 1);
	}
	else
	{
		letra = 'N';
		write (1, &letra, 1);
	}
}
