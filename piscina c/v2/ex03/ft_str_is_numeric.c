/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rabaeza- <rabaeza-@student.42malaga.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 18:13:18 by rabaeza-          #+#    #+#             */
/*   Updated: 2024/06/27 18:52:48 by rabaeza-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str)
	{
		if (*str < '0' && *str > '9')
		{
			return (0);
		}
		str++;
	}
	return (1);
}
