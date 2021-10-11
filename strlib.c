#include <unistd.h>

// Print Character
void    ft_putchar(char c)
{
    write(1, &c, 1);
}

// Print String
void    ft_putstr(char *str)
{
    while(*str != '\0')
    {
        ft_putchar(*str);
        str++;
    }
}

// Check if String is Numeric
int ft_is_numeric(char *str)
{
    int status;
    char c;

    status = 1;
    while (*str != '\0')
    {
        while (c <= '9')
        {
            if (*str == c || *str == ' ')
            {
                c = '0';
                break;
            }
            c++;
        }
        if (c != '0')
            status = 0;
        str++;
    }
    return status;
}
