/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osif <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 18:06:14 by osif              #+#    #+#             */
/*   Updated: 2023/08/22 18:29:53 by osif             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	a;

	a = 0;
	while (str [a] != '\0')
	{
		while (str [a] >= 'a' && str [a] <= 'z')
			str [a] = str [a] - 32;
			a++;
	}	
	return (str);
}
