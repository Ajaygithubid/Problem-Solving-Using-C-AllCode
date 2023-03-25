#include <stdio.h>
int main()
{
    int n;
    printf("Enter integer:");
    scanf("%d", &n);
    for (int i = n; i <= n * 10; i = i + n)
    {
        printf("%d ", i);
    }
}