// Method 1

#include <stdio.h>
// Recursion
int fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    int sum1 = fibo(n - 1);
    int sum2 = fibo(n - 2);
    int series = sum1 + sum2;
    return series;

    // Main Function
}
int main()
{
    int n;
    printf("Enter the Nth term of fibonacci series:");
    scanf("%d", &n);
    int result = fibo(n);
    printf("%d", result);
    return 0;
}

// ---------------------------Method 2----------------------
// #include <stdio.h>
// // Recursion
// int fibo(int n)
// {
//     if (n == 1 || n == 2)
//         return 1;
//     return fibo(n - 1) + fibo(n - 2);

//     // Main Function
// }
// int main()
// {
//     int n;
//     printf("Enter the Nth term of fibonacci series:");
//     scanf("%d", &n);
//     int result = fibo(n);
//     printf("%d", result);
//     return 0;
// }