
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
    Person **users =  malloc(sizeof(Person *) * 5);
    for (int i = 0; i < 4; i++)
    {
        users[i] = create_person(values[i], names[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        print_person(*users[i]);
    }
}

int main(int ac, char** av)
{
    (void)ac;(void)av;

    //palindrom_test("abcddcba");
    person_test();




}