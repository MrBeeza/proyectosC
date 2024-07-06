/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: varias-c <varias-c@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/23 17:33:59 by varias-c          #+#    #+#             */
/*   Updated: 2024/06/23 19:08:50 by varias-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	print_line(int columns, int left, int middle, int right)
{
	int	position;

	position = 1;
	ft_putchar(left);
	while (position < columns - 1)
	{
		ft_putchar(middle);
		position++;
	}
	if (columns > 1)
		ft_putchar(right);
	ft_putchar('\n');
}

void	rush(int columns, int rows)
{
	int	space;

	space = 1;
	print_line(columns, 'A', 'B', 'A');
	while (space < rows - 1)
	{
		print_line(columns, 'B', ' ', 'B');
		space++;
	}
	if (rows > 1)
		print_line(columns, 'C', 'B', 'C');
}
