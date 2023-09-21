#include "sandbox.h"

void print_person(Person person)
{
    printf("age : %d \n", person.age);
    printf("name : %s\n", person.name);
}

Person *create_person(int age, char *name)
{
    Person *new = malloc(sizeof(Person));
    new->age = age;
    new->name = strdup(name);
    return new;
}

void update_person(Person *person, int age, char *name)
{
    if (age >= 0)
        person->age = age;
    if (name != NULL)
    {
        free(person->name);
        person->name = strdup(name);
    }
}

void free_person(Person *person) {
    free(person->name);
    free(person);
}

// int sort_age(Person A, Person B)
// {
//     return A.age - B.age;
// }

// int sort_name(Person A, Person B)
// {
//     return strcmp(A.name, B.name);
// }

// Person ** sort_persons(Person **person_array, int size, comparison_fct fct)
// {
    
// }