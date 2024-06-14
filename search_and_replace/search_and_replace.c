#include <unistd.h>
#include <stdio.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
void ft_putstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        ft_putchar(str[i]);
        i++;
    }
}
void search_and_replace(char *str, char l1, char l2)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (str[i] == l1)
            str[i] = l2;
        i++;
    }
}
int main(int argc, char const *argv[])
{
    
    if (argc != 4  )
    {
        ft_putchar('\n');
        return 0;
    }
    if (argv[2][1] != '\0' && argv[3][1] != '\0')
    {
        ft_putchar('\n');
        return 0;
    }
    
    search_and_replace(argv[1], argv[2][0], argv[3][0]);
    ft_putstr(argv[1]);
    return 0;
}
