/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:58:50 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/07/21 17:18:33 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z' )
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}
/*
int main(void)
{
#include <stdio.h>
    char arr1[] = "holaholahola";
    char arr4[] = "HOLAHOLAHOLAHOLA";

    ft_strlowcase(arr1);
    printf("%s", arr1);
}*/
