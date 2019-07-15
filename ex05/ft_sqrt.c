/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 11:42:11 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/15 13:38:13 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long int	result;
	long int	nbr;

	result = 1;
	nbr = nb;
	if (nb >= 100000000)
		result = 10000;
	while (result * result < nbr)
		result++;
	if (nbr % result == 0)
		return (result);
	return (0);
}
