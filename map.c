void    ft_putchar(char c);

int g_map[4][4];

// Return the Tile that the pos touches
int *get_pos(int pos)
{
    if (pos >= 0 && pos <= 3)
        return ((int[]){pos, 0});
    else if (pos >= 4 && pos <= 7)
        return ((int[]){pos - 3, 3});
    else if (pos >= 8 && pos <= 11)
        return ((int[]){3, (pos - 7)}); // INVERTED !! 
    else if (pos >= 12 && pos <= 15)
        return ((int[]){pos - 11, 0}); // INVERTED !!
    else
        return ((int[]){0, 0});
}

// Insert Height into X/Y Coordinate
void    map_insert(int x, int y, int h)
{
    g_map[x][y] = h;
}

// Print out the Whole 2D Map
void    map_print()
{
    int x;
    int y;

    x = 0;
    y = 0;
    while (y <= 3)
    {
        while (x <= 3)
        {
            ft_putchar('0' + g_map[x][y]);
            ft_putchar(' ');
            x++;
        }
        ft_putchar('\n');
        x = 0;
        y++;
    }
}
