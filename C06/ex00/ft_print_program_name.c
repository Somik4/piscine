/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: osif <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 18:06:45 by osif              #+#    #+#             */
/*   Updated: 2023/08/30 18:12:47 by osif             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int arc, char **arv)
{
	int	i;

	i = 0;
	while (arv[0][i] != '\0')
	{
		write (1, &arv[0][i], 1);
		i++;
	}
	write (1, "\n", 1);
}
