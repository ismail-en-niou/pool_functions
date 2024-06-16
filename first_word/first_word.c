#include <unistd.h>
void ft_putstr(char *str) {
    int i = 0;
    while (str[i] != '\0') {
        write(1, &str[i], 1);
        i++;
    }
}
void ft_putchar(char c) {
    write(1, &c, 1);
}
int main(int argc, char const *argv[]) {
    if (argc != 2) {
        ft_putstr("\n");
        return 0;
    }
    int i = 0;
    while (argv[1][i] == ' ') {
        i++;
    }
    while (argv[1][i] != ' ' && argv[1][i] != '\0') {
        ft_putchar(argv[1][i]);
        i++;
    }
    
    ft_putstr("\n");
    return 0;
}
