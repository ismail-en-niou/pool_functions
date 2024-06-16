#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}
int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        ft_putchar('\n');
    }
    int i = 0;
    while (argv[1][i] != '\0')
    {
        char s = argv[1][i];
        if (s >= 'a' && s <= 'z')
            s = (s - 'a' + 1) % 26 + 'a';
        if (s >= 'A' && s <= 'Z')
            s = (s - 'A' + 1) % 26 + 'A';
        ft_putchar(s);
        i++;
    }
    ft_putchar('\n');
    return 0;
}
