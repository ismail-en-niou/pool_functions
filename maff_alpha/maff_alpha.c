#include <unistd.h>
int main(int argc, char const *argv[])
{
    int i = 0 ;
    char debut ='a'; 
    while (i<26)
    {
        if (i%2 == 0 )
            write(1,&debut,1);
        else{
            char str = debut - 32;
             write(1,&str,1);
        } 
        debut++;
        i++;  
    }
    return 0;
}
