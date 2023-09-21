#include "sandbox.h"

bool ft_is_palindrom(char *str)
{  
    int j;
    int mid;

    if (!str)
        return false;
    j = strlen(str);
    mid = j / 2;
    for (int i = 0; i < mid; i++, j--)
    {
        if (str[i] != str[j - 1])
            return false;
    }
    return true;
}
