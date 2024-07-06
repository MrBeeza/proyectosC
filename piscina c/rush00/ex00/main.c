/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabaeza- <rabaeza-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 15:40:19 by rabaeza-          #+#    #+#             */
/*   Updated: 2024/06/23 13:35:49 by rabaeza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	rush(int x, int y);

int	ft_string_to_int(char *p)
{
	int	parsedint;
	int	len;

	parsedint = 0;
	len = 0;
	while (p[len])
	{
		if (p[len] < '0' || p[len] > '9')
		{
			write(1, "Solo se permiten números enteros.\n", 34);
			return (-1);
		}
		parsedint = parsedint * 10 + p[len] - '0';
		len++;
	}
	return (parsedint);
}

int	ft_is_negative(char *p, char *p2)
{
	if (p[0] == '-' || p2[0] == '-')
	{
		write(1, "Solo se permiten números enteros positivos.\n", 44);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	if (argc != 3)
	{
		write(1, "El número de parámetros a introducir debe ser 2.\n", 51);
		return (1);
	}
	if (ft_is_negative(argv[1], argv[2]) == 1)
		return (1);
	x = ft_string_to_int(argv[1]);
	if (x == -1)
		return (1);
	y = ft_string_to_int(argv[2]);
	if (y == -1)
		return (1);
	rush(x, y);
	return (0);
}
