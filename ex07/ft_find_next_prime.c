/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/15 11:58:35 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/15 12:04:41 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	long int	i;
	long int	nbr;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	nbr = nb;
	while (nbr % i != 0 && i * i < nbr)
	{
		i = i + 2;
	}
	return (i * i > nbr ? 1 : 0);
}

int		ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	return (ft_is_prime(nb) ?
			nb : ft_find_next_prime(nb + 1));
}
