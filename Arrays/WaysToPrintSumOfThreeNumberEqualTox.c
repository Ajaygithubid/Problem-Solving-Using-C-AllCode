#include <stdio.h>

int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    int x = 12;
    int count = 0;
    int n = 7;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                if (arr[i] + arr[j] + arr[k] == x)
                {
                    count++;
                }
            }
        }
    }
    printf("%d", count);
}