void    ft_putchar(char c);
void    ft_putstr(char *str);

int *get_pos(int pos);
void    map_insert(int x, int y, int h);
void    map_print();

int g_passes = 0;

// Checking most easy edge cases like 1 or 4
void    ft_check_edge_case(int i, int pos)
{
    int pos_array[2];

    pos_array[0] = get_pos(pos)[0];
    pos_array[1] = get_pos(pos)[1];
    if (i == 4)
    {

    }
    else if (i == 1)
    {
        map_insert(pos_array[0], pos_array[1], 4);
    }
}

// Entrypoint for Calculator
void    ft_start_calc(int edges[16])
{
    int count;

    count = 0;
    while (count < 16)
    {
        ft_check_edge_case(edges[count], count);
        count++;
    }
    map_print();
}
