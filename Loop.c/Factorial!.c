#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value:");
    scanf("%d", &n);
    int product = 1;
    int i = 1;
    while (i <= n)
    {
        product = product * i;
        i++;
    }
    printf("The number is : %d", product);
}