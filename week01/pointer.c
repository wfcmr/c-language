#include <stdio.h>

int main(void)
{
    int a = 10;
    int *p = &a;

    printf("a = %d\n", a);
    printf("&a = %p\n", (void *)&a);

    printf("p = %p\n", (void *)p);
    printf("*p = %d\n", *p);


    *p = 100;

    printf("\nAfter modify:\n");

    printf("a = %d\n", a);
    printf("*p = %d\n", *p);


    int b = 20;

    printf("&a = %p\n", (void *)&a);
    printf("&b = %p\n", (void *)&b);


    p = &b;

    printf("*p = %d\n", *p);


    *p = 500;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    
    return 0;
}