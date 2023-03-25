#include <stdio.h>
void greet();
int main()
{

    greet();
    return 0;
}
void greet()
{
    int n;
    printf("Enter the value");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d ", i);
    }
    return;
}