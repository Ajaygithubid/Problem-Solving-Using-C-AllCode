#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 4, 7}, {3, 4, 8}, {8, 9, 2}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}