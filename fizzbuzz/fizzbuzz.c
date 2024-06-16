#include <unistd.h>
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
void ft_put_number(int n)
{
    if (n >= 10)
        ft_put_number(n / 10);
    ft_putchar(n % 10 + '0');
}
int main(void)
{
    int i = 1;
    while (i <= 100)
    {
        if (i % 3 == 0 && i % 5 == 0)
            ft_putstr("fizzbuzz");
        else if (i % 3 == 0)
            ft_putstr("fizz");
        else if (i % 5 == 0)
            ft_putstr("buzz");
        else
            ft_put_number(i);
        ft_putchar('\n');
        i++;
    }
    return 0;
}
