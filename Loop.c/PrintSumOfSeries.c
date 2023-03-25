// print the sum of this series 1-2+3-4+5-6+7.....
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0) // doubt (i%2!=0)
        {
            sum = sum + i;
        }
        if (i % 2 == 0)
        {
            sum = sum - i;
        }
    }
    printf("The sum is : %d", sum);
}