/*
Find the difference between the sum of element at even indices to the sum of element at odd indicies
*/
#include <stdio.h>
int main()
{
    int arr[7] = {1, 29, 93, 34, 85, 16, 77};
    // 0  1   2   3   4   5   6
    int sumEven = 0;
    int sumOdd = 0;
    for (int i = 0; i <= 6; i++)
    {
        if (i % 2 == 0)
        {
            sumEven = sumEven + arr[i];
        }
        else
        {
            sumOdd = sumOdd + arr[i];
        }
    }
    int res = sumEven - sumOdd;
    printf("%d", res);
}