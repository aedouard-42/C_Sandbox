#ifndef SANDBOX_H
# define SANDBOX_H

    #include <stdio.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <stdbool.h>
    #include <string.h>

    /* pointeurs sur fct*/

    typedef int (*comparison_fct) (void *, void *);

    /* structure*/

    typedef struct
    {
        int age;
        char *name;
    }   Person;

    typedef struct
    {
        int value;
        int size;
        
    } House;

    typedef struct s_list
    {
        void            *content;
        struct s_list   *next;
    } t_list;
    

    /*fonctions*/

    bool ft_is_palindrom(char *str);

    void print_person(Person person);
    Person *create_person(int age, char *name);
    void update_person(Person *person, int age, char *name);
    void free_person(Person *person);

    Person  **sort_persons(Person **person_array, int size, comparison_fct fct);
    int sort_age(void *a, void *b);
    int sort_name(void *a, void *b);

    t_list *ft_lstnew(void *content);
    void    ft_lstaddfront(t_list **head, t_list *new);
    void    ft_lstaddback(t_list **head, t_list *new);
    void    ft_lstiter(t_list *lst, void (*f)(void *));
    void    ft_lstdelone(t_list *lst, void (*del)(void*));
    void    ft_lstclear(t_list **head, void (*del)(void*));


 #endif