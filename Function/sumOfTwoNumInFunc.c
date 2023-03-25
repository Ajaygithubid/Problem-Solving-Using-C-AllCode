#include <stdio.h>
int addSum(int, int);

int main()
{
    int a;
    printf("Enter the value:");
    scanf("%d", &a);
    int b;
    printf("Enter the value:");
    scanf("%d", &b);
    int sum = addSum(a, b); // Here (this is passing the value from scanf )
    printf("%d", sum);
}
int addSum(int a, int b) // Here  (to this line)
{
    return (a + b);
}