/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabaeza- <rabaeza-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/28 11:13:16 by rabaeza-          #+#    #+#             */
/*   Updated: 2024/07/01 12:21:38 by rabaeza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (*str < 32 || *str > 126)
		{
			return (0);
		}
		str++;
	}
	return (1);
}
