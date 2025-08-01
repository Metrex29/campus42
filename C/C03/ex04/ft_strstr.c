/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpicon-m <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:50:55 by cpicon-m          #+#    #+#             */
/*   Updated: 2025/07/28 14:07:33 by cpicon-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i])
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (str + i);
			j++;
		}
		i++;
	}
	return (0);
}
/*
int main()
{
#include <stdio.h>
#include <string.h>

	char *cadena = "Hola mundoerere";
	char *subcadena = "";
	char *resultado = ft_strstr(cadena, subcadena);
	char *resultado2 = strstr(cadena, subcadena);

	printf("%s\n", resultado);
	printf("%s", resultado2);
}*/
