#include <stdio.h>
int main()
{
    int n;
    printf("Enter value:");
    scanf("%d", &n);
    if ((n % 5 == 0 || n % 3 == 0) && n % 15 != 0) // Always remember (B O D/M A/S)
    {
        printf("Number is divisible by 5 or 3 but not 15");
    }
    else
    {
        printf("Number is also divisible by 15 and 5 or 3");
    }
}