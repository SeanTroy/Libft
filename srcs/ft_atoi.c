/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plehtika <plehtika@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:12:06 by plehtika          #+#    #+#             */
/*   Updated: 2022/02/15 19:42:45 by plehtika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str)
{
	unsigned long	res;
	int				i;
	int				sign;

	res = 0;
	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\r' || str[i] == '\t'
		|| str[i] == '\v' || str[i] == '\f')
		i++;
	if ((str[i] == '+' || str[i] == '-')
		&& str[i + 1] >= '0' && str[i + 1] <= '9')
		i++;
	if (i > 0 && str[i - 1] == '-')
		sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		if (res > 9223372036854775807u && sign == 1)
			return (-1);
		if (res > 9223372036854775808u && sign == -1)
			return (0);
		i++;
	}
	return (sign * res);
}
