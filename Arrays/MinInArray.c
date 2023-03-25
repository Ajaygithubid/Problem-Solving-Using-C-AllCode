#include <stdio.h>
int main()
{
    int arr[5] = {42, 34, 54, -65, -1};
    int min = arr[0];
    for (int i = 0; i <= 4; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    printf("%d", min);
}