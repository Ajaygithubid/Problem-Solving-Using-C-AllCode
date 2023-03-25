#include <stdio.h>
int main()
{
    int arr[50] = {1, 2, 3, 4, 5}; // array Decleration and inilitization
    arr[0] = 9;
    arr[-2] = 8;
    printf("%d", arr[3]);
}