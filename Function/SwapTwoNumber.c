// code is right but not execute the value
//  Question is swap two number
#include <stdio.h>
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d", &a);

    int b;
    printf("Enter the value of b:");
    scanf("%d", &b);

    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("The Swaped value of a %d\n", a);
    printf("The Swaped value of b %d", b);
    return 0;
}