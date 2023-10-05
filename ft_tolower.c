/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:50:31 by eabdelha          #+#    #+#             */
/*   Updated: 2021/11/02 11:52:02 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
/*int main(void)
{
	char st[9] = "m--aF5hap";
	char sts[9] = "m--aF5hap";
	for (int i = 0; i < 9 ;i++)
		printf("%c",ft_tolower(st[i]));
	printf("\n");
	for (int i = 0; i < 9 ;i++)
		printf("%c",tolower(sts[i]));
	return 0;
}*/
