// Write a program to store Roll Number and Marks obtained by 4 student side by side in matrix
#include <stdio.h>
int main()
{
    int r, c;
    printf("Enter the number of rows(Roll Number & Subject):");
    scanf("%d", &r);
    printf("Enter the number of column(Marks):");
    scanf("%d", &c);
    int arr[r][c];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
    }
}