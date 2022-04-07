#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(!*lst)
         *lst = new;
    else
    {
        t_list  *lastNode = *lst;
        while (lastNode->next != 0)
		    lastNode = lastNode->next;
    lastNode->next = new;
    }
}