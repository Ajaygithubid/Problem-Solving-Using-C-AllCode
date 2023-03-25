// 1 2 4 8 16 32 GP
// #include <stdio.h>
// int main()
// {
//     int n;
//     printf("Enter the number:");
//     scanf("%d", &n);
//     int a = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         printf("%d ", a);
//         a = a * 2;
//     }
// }

// GP= 3 12 48 .....n terms
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int a = 3;
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", a);
        a = a * 4;
    }
}