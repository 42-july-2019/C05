/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 17:44:04 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/11 17:58:56 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int result;

	if (nb <= 0 || power < 0)
		return (0);
	else if (power > 0)
		result = nb * ft_recursive_power(nb, power - 1);
	else
		result = 1;
	return (result);
}
