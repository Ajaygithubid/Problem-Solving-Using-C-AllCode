#include <stdio.h>
int power(int a, int b)
{
    if (b == 0) // Base case
        return 1;
    int recAns = a * power(a, b - 1); // Main code
    return recAns;
}
int main()
{
    int a;
    printf("Enter the value of a:");
    scanf("%d", &a);
    int b;
    printf("Enter the value of a:");
    scanf("%d", &b);
    int p = power(a, b);
    printf("%d", p);
    return 0;
}