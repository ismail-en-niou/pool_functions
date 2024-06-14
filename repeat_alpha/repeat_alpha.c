#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return 0;
    }
    int count;
    int i = 0;
    while (argv[1][i] != '\0')
    {
        if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
        {
            int j = 0;
            count = argv[1][i] - 'a' +1;
            while (j < count)
            {
                ft_putchar(argv[1][i]);
                j++;
            }
        }
        if (argv[1][i] >= 'A' && argv[1][i] <= 'A')
        {
            count = argv[1][i] - 'A' +1;
            int j = 0;
            while (j < count)
            {
                ft_putchar(argv[1][i]);
                j++;
            }
        }
        ft_putchar(argv[1][i]);
        i++;
    }
    ft_putchar('\n');
    return 0;
}
