#include <unistd.h>
void ft_countdouwn(){
    char c = '9';
    while (c != ('0' - 1))
    {
        write(1,&c,1);
        c--;
    }
}
int main(int argc, char const *argv[])
{
    ft_countdouwn();
    return 0;
}
