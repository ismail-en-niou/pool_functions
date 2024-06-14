#include <unistd.h>
void	ft_print_numbers(void){
    int i = 0;
    while (i<10)
    {
        char s = i + '0';
        write(1,&s,1);
        i++;
    }
    
}
