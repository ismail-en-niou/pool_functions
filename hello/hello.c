#include <unistd.h>
void ft_putstr(char *str){
    while(*str!= '\0'){
        write(1,str,1);
        str++;
    }
}
int main(int argc, char const *argv[])
{
    char str[] = "Hello World!";
    ft_putstr(str);
    return 0;
}
