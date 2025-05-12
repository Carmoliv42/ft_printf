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
	unsigned int	count;
	
	count = 0;
	while (s[count])
	{
		printf_putchar(s[count]);
		count++;
	}
	return (count);
}