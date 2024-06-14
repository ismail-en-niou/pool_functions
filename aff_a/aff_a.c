#include <unistd.h>
int  aff_a(char *str){
    int i = 0; 
    while (str[i] != '\0'){
        if (str[i] == 'a')
            return 0;
    i++;
    }
    return 1;
}
int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        write(1,"a\n",2);
        return 0;
    }else 
    {
        if (!aff_a((char *)argv[1])){
            write(1,"a\n",2);
            return 0;
        }
            write(1,"\n",1);  
    }
    return 0;
}
