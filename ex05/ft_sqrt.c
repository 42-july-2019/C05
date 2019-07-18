/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/12 11:42:11 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/18 15:37:23 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long int	result;
	long int	nbr;

	result = 2;
	nbr = nb;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	if (nb >= 100000000)
		result = 10000;
	while (result * result < nbr)
		result++;
	if (nbr ==  result * result)
		return (result);
	return (0);
}
