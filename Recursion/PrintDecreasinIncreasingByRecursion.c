/*
Hint:
4
3
2
1
1
2
3
4
call se pehle ,call ke print kra do

*/
#include <stdio.h>
int decreasing(int n)
{
    if (n == 0)
    { // Base Case
        return 1;
    }
    printf("%d \n", n); // change from Here
    int result = decreasing(n - 1);
    printf("%d \n", n); // Here
    return result;
}
int main()
{
    int n;
    printf("Enter the number:");
    scanf("%d", &n);
    decreasing(n);
}
