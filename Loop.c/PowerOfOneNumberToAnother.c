#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter the valie in a:");
    scanf("%d", &a);
    printf("Enter the value in b:");
    scanf("%d", &b);
    int power = 1;
    for (int i = 1; i <= b; i++)
    {
        power = power * a;
        printf("%d To the power of %d is: %d\n", a, i, power);
    }
}