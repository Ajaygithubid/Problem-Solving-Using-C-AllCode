// WAP to enter the element in 2D array by user.
#include <stdio.h>
int main()
{
    int arr[3][3]; // 3x3 Array or Matrix
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &arr[i][j]); // user input of 2D array
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}