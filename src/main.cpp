#include <stdio.h>
#include <stdlib.h>

#include "my_str_funcs.h"
#include <string.h>

int main()
{
    printf("%d\n", puts("KVO") == my_puts("KVO"));
    puts("");

    char my_str[] = "Abcdefghijklmn";
    printf("%p\n%p\n", strchr(my_str, '\0'), my_strchr(my_str, '\0'));

    return EXIT_SUCCESS;
}
