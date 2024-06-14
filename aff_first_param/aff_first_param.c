#include <unistd.h>
int main(int argc, char const *argv[])
{
    if (argc == 1)
    {
        write(1,"\n",1);
        return 0;
    }
        int i = 0 ;
        while (argv[1][i] != '\0')
        {
            write(1,&argv[1][i],1);
            i++;
        }
    return 0;
}
