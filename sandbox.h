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



    /*fonctions*/

    /*palindrom*/
    bool ft_is_palindrom(char *str);

    /*Person*/
    void print_person(Person person);
    Person *create_person(int age, char *name);
    void update_person(Person *person, int age, char *name);
    void free_person(Person *person);






 #endif