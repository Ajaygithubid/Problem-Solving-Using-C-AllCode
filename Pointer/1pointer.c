#include <stdio.h>
int main()
{
    int a = 1;
    printf("%p\n", &a); // (%p) is use for pirnt the address of vraible
    int *x = &a;
    printf("%p\n", x);
    printf("%p", *x);
    return 0;
}