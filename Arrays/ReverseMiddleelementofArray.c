#include <stdio.h>
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 1, j = 3; i <= j; i++, j--) // main logic is here
    {
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }
    for (int i = 0; i <= 4; i++) // main Logic is here
    {
        printf("%d ", a[i]);
    }
}