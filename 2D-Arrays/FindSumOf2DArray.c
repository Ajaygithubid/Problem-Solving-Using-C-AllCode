#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the number of Rows:");
    scanf("%d", &r);
    printf("Enter the number of columns:");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    // printf("\n");
    int sumMatrix = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sumMatrix += arr[i][j];
        }
    }
    printf("%d", sumMatrix);
    // printf("\n");
}