#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the side of triangle:");
    scanf("%d %d %d", &a, &b, &c);
    if ((a + b) > c && (b + c) > a && (a + c) > b)
    {
        printf("its triangle");
    }
    else
    {
        printf("Not");
    }
}