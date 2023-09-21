
#include "sandbox.h"

int main(int ac, char** av)
{
    (void)ac;(void)av;


    char *string = "abcddcba";

    printf("%d\n", ft_is_palindrom(string));

    Person *JP = create_person(12, "jeanpierre");
    print_person(*JP);
    update_person(JP, 25, "Jean Phi");
    print_person(*JP);


}