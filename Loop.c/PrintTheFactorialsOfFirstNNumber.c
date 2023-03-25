/*
Ques: Print the factorial of a given number 'n'
suppose n=5;
  1!=1
  2!=1*2
  3!=3*2*1
  4!=4*3*2*1
  5!=5*4*3*2*1
*/
#include <stdio.h>
/* why error
int main()
{
    int n;
    printf("Enter the value:");
    scanf("%d", &n);
    int product = 1;
    int i = 1;
    while (i <= n)
    {
         product = product * i;
         i++;
         printf("The factorial of %d is:%d\n", i, product); // Here is change from main code
     }
 }*/
int main()
{
    int n;
    printf("Enter the value:");
    scanf("%d", &n);
    int product = 1;
    for (int i = 1; i <= n; i++)
    {
        product = product * i;
        printf("The factorial of %d is:%d\n", i, product);
    }
}