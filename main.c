#include "ft_printf.h"
#include <stdio.h>

int main()
{
    int age = 54;
    char *c = "Moha";

    int nb = ft_printf("hello my name is %s, i'm %d in hexadecimal is %x and the pointer is %p\n",c,age,age,c);
    printf("%d\n",nb);
    int nbn = ft_printf("hello my name is %s, i'm %d in hexadecimal is %x and the pointer is %p\n",c,age,age,c);
    printf("%d\n",nbn);
}
