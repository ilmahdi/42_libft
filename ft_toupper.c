/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 11:34:25 by eabdelha          #+#    #+#             */
/*   Updated: 2021/11/02 11:48:51 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
/*int main(void)
{
	char st[9] = "m--aF5hap";
	char sts[9] = "m--aF5hap";
	for (int i = 0; i < 9 ;i++)
		printf("%c",ft_toupper(st[i]));
	printf("\n");
	for (int i = 0; i < 9 ;i++)
		printf("%c",toupper(sts[i]));
	return 0;
}*/
