#include <stdio.h>
int main()
{
    int sumElement[5];
    int sum = 0;
    for (int i = 0; i <= 4; i++)
    {
        scanf("%d", &sumElement[i]);
        sum = sum + sumElement[i];
    }
    printf("%d", sum);
}