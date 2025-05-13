/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_putstr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: carmoliv <carmoliv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 21:47:20 by carmoliv          #+#    #+#             */
/*   Updated: 2025/05/12 21:54:29 by carmoliv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	printf_putstr(char *s)
{
	int	count;
	
	if (!s)
		return (write(1, "null", 6));
	count = 0;
	while (s[count])
	{
		write(1,&s[count], 1);
		count++;
	}
	return (count);
}