#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    if (n < 0) // if n=-2 then multiply with (-1) and convert into positive number
    {
        n = n * (-1); // this is use to convert negative number into positive num (- * - = +)
    }
    printf("The absolute value is:%d", n);
}