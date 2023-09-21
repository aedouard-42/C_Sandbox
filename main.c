
#include "sandbox.h"

void palindrom_test(char *str)
{
    if (ft_is_palindrom(str))
        printf("la string est un palindrome\n");
    else
        printf("la string n'est pas un palindrome\n");

}

void person_test()
{
    char *names[] = {"antoine", "julien", "theo", "thomas"};
    int values[] = {12,5, 32,4};
    Person **users =  malloc(sizeof(Person *) * 4);
    for (int i = 0; i < 4; i++)
    {
        users[i] = create_person(values[i], names[i]);
    }
    sort_persons(users, 4, &sort_age);
        for (int i = 0; i < 4; i++)
    {
        print_person(*users[i]);
    }
    
}

void print_node_content(void *content)
{
    printf("le noeud contient : %d\n", *(int *)content);
}

void linked_list_test()
{
    int values[] = {12,5, 32,4};

    t_list *head = ft_lstnew(&values[0]);
    for (int i = 1; i < 4; i++)
    {
        ft_lstaddback(&head, ft_lstnew(&values[i]));
    }
    ft_lstiter(head, print_node_content);

}

int main(int ac, char** av)
{
    (void)ac;(void)av;

    //palindrom_test("abcddcba");
    //person_test();
    linked_list_test();


}