#include <stdio.h>
int power(int a, int b)
{
    if (b == 0) // Base Case
        return 1;
    int x = power(a, b / 2);
    if (b % 2 == 0)
    { // Even
        return x * x;
    }
    else
    {
        return x * x * a;
    }
}
int main()
{
    int a;
    printf("Enter the base:");
    scanf("%d", &a);

    int b;
    printf("Enter the base:");
    scanf("%d", &b);
    int result = power(a, b);
    printf("%d", result);
    return 0;
}
