/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plehtika <plehtika@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 12:31:10 by plehtika          #+#    #+#             */
/*   Updated: 2022/02/08 12:31:36 by plehtika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_abs(int number)
{
	if (number >= 0)
		return (number);
	else
		return (-number);
}