#include <stdio.h>
int main()
{
    float x;
    printf("Enter the decimal:");
    scanf("%f", &x);
    int y;
    y = x;
    float z = x - y;
    printf("%f", z);
}