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

int sort_age(void *a, void *b)
{
    Person *p1 = (Person*)a;
    Person *p2 = (Person*)b;
    return p1->age - p2->age;
}

int sort_name(void *a, void *b)
{
    Person *p1 = (Person*)a;
    Person *p2 = (Person*)b;
    return strcmp(p1->name, p2->name);
}

void swap_person(Person **a, Person **b)
{
    Person *tmp = *b;
    *b = *a;
    *a = tmp;
}

Person  **sort_persons(Person **person_array, int size, comparison_fct fct)
{
    int swap = 1;
    while (swap)
    {
        swap = 0;
        for (int i =0; i < size -1; i++)
        {
            if ((*fct)(person_array[i], person_array[i + 1]) > 0)
            {
                swap = 1;
                swap_person(&person_array[i], &person_array[i + 1]);
            }
        }
    }
    return person_array;
}

