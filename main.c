#include "ft_printf.h"


// void putnbr(int n)
// {
//     int res = 0;


// } 
int main()
{
    fclose(stdout);
    int i = ft_printf("hello world");
    fprintf(stderr, "%d\n", i);
}