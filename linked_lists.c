#include "sandbox.h"

    t_list *ft_lstnew(void *content)
    {
        t_list *new;

        new = malloc(sizeof(t_list));
        if (!new)
            return NULL;
        new->content = content;
        new->next = NULL;
        return new;
    }

    void    ft_lstaddfront(t_list **head, t_list *new)
    {
        if (!new || !head)
            return;
        new->next = *head;
        *head = new;
    }

    void    ft_lstaddback(t_list **head, t_list *new)
    {
        if (!new || !head)
            return;
        t_list *tmp = *head;

        if (!*head)
        {
            *head = new;
            return;
        }
        while(tmp->next)
        {
            tmp = tmp->next;
        }
        tmp->next = new;
    }

    void    ft_lstdelone(t_list *lst, void (*del)(void*))
    {
        if (!lst || !del)
            return;
        (*del)(lst->content);
        free(lst);
    }

    void    ft_lstclear(t_list **head, void (*del)(void*))
    {
        t_list *tmp;
        t_list *next;

        if (!head || !del)
            return;
        tmp = *head;
        next = NULL;
        while(tmp)
        {
            next = tmp->next;
            ft_lstdelone(tmp, del);
            tmp = next;
        }
        *head = NULL;
    }

    void    ft_lstiter(t_list *lst, void (*f)(void *))
    {
        if (!lst || !f)
            return;
        while(lst)
        {
            (*f)(lst->content);
            lst = lst->next;
        }
    }