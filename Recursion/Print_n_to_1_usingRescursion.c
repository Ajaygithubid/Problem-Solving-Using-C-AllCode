#include <stdio.h>
int decreasing(int n)
{
    if (n == 0)
    { // Base Case
        return 1;
    }
    printf("%d\n", n);
    int result = decreasing(n - 1);
    return result;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    decreasing(n);
}
