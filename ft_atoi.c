/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahansal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 04:40:13 by mahansal          #+#    #+#             */
/*   Updated: 2022/10/26 09:06:48 by mahansal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_whitespace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (-1);
}

static int	check_long(int number, char n, int sign)
{
	int	is_long;

	is_long = 1;
	if ((unsigned long) number * 10 + (n - '0')
		> 9223372036854775807 && sign == 1)
		is_long = -1;
	else if ((unsigned long) number * 10 + (n - '0')
		> 9223372036854775807 && sign == -1)
		is_long = 0;
	return (is_long);
}

int	ft_atoi(const char *str)
{
	int	index;
	int	sign;
	int	number;
	int	is_long;

	sign = 1;
	index = 0;
	number = 0;
	is_long = 0;
	while (str[index] != '\0' && is_whitespace(str[index]) == 1)
		index++;
	if (str[index] == '-' || str[index] == '+')
	{
		if (str[index] == '-')
			sign = -1;
		index++;
	}
	while (str[index] != '\0' && str[index] >= '0' && str[index] <= '9')
	{
		is_long = check_long(number, str[index], sign);
		if (is_long != 1)
			return (is_long);
		number *= 10;
		number += str[index] - 48;
		index++;
	}
	return (number * sign);
}
