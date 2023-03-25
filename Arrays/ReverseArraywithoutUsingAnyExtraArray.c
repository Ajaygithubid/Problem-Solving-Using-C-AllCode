#include <stdio.h>
void reverseArray(int arr[])
{
    for (int i = 0, j = 6; i < j; i++, j--)
    {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    return;
}
int main()
{
    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    reverseArray(arr);
    for (int i = 0; i <= 6; i++)
    {
        printf("%d ", arr[i]);
    }
}