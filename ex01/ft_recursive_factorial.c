/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alabreui <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/11 17:17:36 by alabreui          #+#    #+#             */
/*   Updated: 2019/07/11 17:23:47 by alabreui         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int result;

	if (nb < 0)
		return (0);
	else if (nb > 1)
		result = nb * ft_recursive_factorial(nb - 1);
	else
		result = 1;
	return result;
}
