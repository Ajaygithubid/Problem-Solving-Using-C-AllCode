// #include <stdio.h>
// int main()
// {
//     int arr[5] = {42, 34, 54, 65, 1};
//     int max = arr[0];
//     for (int i = 0; i <= 4; i++)
//     {
//         if (max < arr[i])
//         {
//             max = arr[i];
//         }
//     }
//     printf("%d", max);
// }
// Method 2
#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[5] = {42, 34, 54, 65, 1};
    int max = INT_MAX;
    // for (int i = 0; i <= 4; i++)
    // {
    //     if (max < arr[i])
    //     {
    //         max = arr[i];
    //     }
    // }
    printf("%d", max);
}