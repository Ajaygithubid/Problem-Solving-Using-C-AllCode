#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of an Array:");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i <= n - 1; i++)
    {
        printf("Enter the element of array %d\n", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i <= n - 1; i++)
    {
        printf("%d ", arr[i]);
    }
}