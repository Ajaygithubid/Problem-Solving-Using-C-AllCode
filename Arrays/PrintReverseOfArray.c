#include <stdio.h>
int main()
{
    int arr[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the Element %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 4; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
}

// Mza aa gya iss code me