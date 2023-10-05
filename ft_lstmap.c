/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eabdelha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 08:41:10 by eabdelha          #+#    #+#             */
/*   Updated: 2021/11/07 18:36:32 by eabdelha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*hilst;
	t_list	*pilst;

	hilst = NULL;
	while (lst != NULL)
	{
		pilst = ft_lstnew(f(lst->content));
		if (pilst == NULL)
		{
			ft_lstclear(&hilst, del);
			return (NULL);
		}
		ft_lstadd_back(&hilst, pilst);
		lst = lst->next;
	}
	return (hilst);
}
/*void *f(void *content) 
{
    (void)content;
    return ("OK !");
}
void del(void *p)
{
	p--;
}
int main(void)
{
	char age[]= "age";
    char page[] = "page";
    char gg[] = "gg";
    char hh[] = "hh";
    char uu[] = "uu";
    t_list *q = ft_lstnew(&page);
    t_list *p = ft_lstnew(&age);
    t_list *w = ft_lstnew(&gg);
    t_list *h = ft_lstnew(&hh);
    t_list *u = ft_lstnew(&uu);
    q->next = p;
    p->next = w;
    w->next = h;
    h->next = u;
    t_list *ft = ft_lstmap(q, &f, &del);
	printf("%s\n",q->next->next->next->next->content);
	return 0;
}*/
