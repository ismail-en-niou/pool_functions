#include <unistd.h>
int ft_strlen(char *str){
    int i = 0 ;
    while (str[i]!= '\0')
        i++;
    return i ;
}
void ft_putstr(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
}
void ft_putchar(char c ){
    write(1,&c,1);
}
int main(int argc, char *argv[])
{
    if (argc != 2 )
    {
        ft_putstr("\n");
        return 0 ;
    }
    int i = ft_strlen((char *)argv[1]) - 1; 
    while (i != -1)
    {
        ft_putchar(argv[1][i]);
        i--;
    }
    ft_putstr("\n");
    return 0;
}
