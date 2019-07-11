/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 17:30:23 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/11 17:41:03 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb,int power)
{
	int result;

	result = 1;
	if (nb < 0 || power < 0)
		return 0;
	while (power > 0)
	{
		result = result * nb;
		power--;
	}
	return result;
}
