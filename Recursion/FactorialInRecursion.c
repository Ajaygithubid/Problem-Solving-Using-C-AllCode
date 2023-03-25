
/*
This is finding Factorial through Function.


#include <stdio.h>
int factorial(int);
int main()
{
    int n;
    printf("Enter the value:");
    scanf("%d", &n);
    int result = factorial(n);
    printf("%d", result);
}
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

*/

// Finding Factorial through Recursion
#include <stdio.h>
int factorial(int n)
{
    if (n == 1 || n == 0)
        return 1; // base case
    return n * factorial(n - 1);
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int result = factorial(n);
    printf("%d", result);
}