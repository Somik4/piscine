/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osif <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 18:56:03 by osif              #+#    #+#             */
/*   Updated: 2023/08/20 18:44:29 by osif             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	uir;

	uir = *a;
	*a = *a / *b;
	*b = uir % *b;
}
int main()
