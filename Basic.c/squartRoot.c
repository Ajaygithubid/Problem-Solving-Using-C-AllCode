#include <stdio.h>
#include <math.h>
int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d", &a);
    int root = sqrt(a);
    printf("The Square root of %d is %d", a, root);
}