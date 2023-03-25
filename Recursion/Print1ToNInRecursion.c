/*
 Method 1
#include <stdio.h>
void increasing(int x, int n)
{
    if (x > n)
    { // Base Case
        return;
    }
    printf("%d\n", x);
    increasing(x + 1, n);
    return;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    increasing(1, n);
    return 0;
}
*/

// Method 2
#include <stdio.h>
int decreasing(int n)
{
    if (n == 0)
    { // Base Case
        return 1;
    }
    // printf("%d\n", n);   change from Here
    int result = decreasing(n - 1);
    printf("%d\n", n); // Here
    return result;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    decreasing(n);
}
