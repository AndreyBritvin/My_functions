#include "my_str_funcs.h"

int my_puts(const char str[])
{
    return printf("%s\n", str);
}

const char * my_strchr(const char *str, int ch)
{
    int index = 0;
    while (str[index] != '\0')
    {
        if (str[index] == ch)
        {
            return &str[index];
        }

        index++;
    }

    if (ch == '\0')
    {
        return &str[index];
    }

    return NULL;
}
