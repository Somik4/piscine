/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osif <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 12:49:22 by osif              #+#    #+#             */
/*   Updated: 2023/08/23 16:49:27 by osif             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	a;

	a = 0;
	while (a < n && s1[a] != '\0' && s2[a] != '\0' && s1[a] == s2[a])
	{
		a++;
	}
	return (s1[a] - s2[a]);
}
