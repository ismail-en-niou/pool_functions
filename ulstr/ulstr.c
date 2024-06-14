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
int is_upperCase(char c)
{
    if (c >= 'A' && c <= 'Z')
        return 1;
    return 0;
}
int is_lowerCase(char c)
{
    if (c >= 'a' && c <= 'z')
        return 1;
    return 0;
}
void ulstr(char *str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (is_lowerCase(str[i])==1)
            str[i] = str[i] - 32;  
        else if  (is_upperCase(str[i])==1)
            str[i] = str[i] + 32;
        i++;
    }
}
int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        ft_putchar('\n');
        return 0;
    }
    ulstr(argv[1]);
    ft_putstr(argv[1]);
    return 0;
}
