void    ft_putchar(char c);
void    ft_putstr(char *str);
int ft_is_numeric(char *str);

void    map_insert(int x, int y, int h);

void    ft_start_calc(int edges[16]);

// Fields that were Inputted
int g_fields[16];

// Filling g_fields and checking if the Argument has the correct amount of Numbers
int ft_fill_edges(char *nums)
{
    int count;
    char num;

    count = 0;
    num = '0';
    while (*nums != '\0')
    {
        while (num <= '4')
        {
            if (*nums == num)
            {
                g_fields[count] = (int)(num - 48);
                count++;
            }
            num++;
        }
        num = '0';
        nums++;
    }
    if (count == 16)
        return 1;
    else
        return 0;
}

// Initialize the Map with only 0
void    init_map()
{
    int x;
    int y;

    x = 0;
    y = 0;
    while (y <= 3)
    {
        while (x <= 3)
        {
            map_insert(x, y, 0);
            x++;
        }
        x = 0;
        y++;
    }
}

// Entrypoint
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        if (ft_is_numeric(argv[1]) == 1)
        {
            if (ft_fill_edges(argv[1]) == 1)
            {
                init_map();
                ft_start_calc(g_fields);
            } 
            else
                ft_putstr("ERR: Unknown Error while Parsing Argument.\n");
        }  
        else 
            ft_putstr("ERR: Invalid Argument.\n");
    } 
    else 
        ft_putstr("ERR: Invalid amount of Arguments.\n");
    return 0;
}
