#include <stdio.h>
int main()
{
    int marks[5];
    for (int i = 0; i <= 4; i++)
    {
        printf("Enter the marks of student %d\n", i + 1);
        scanf("%d", &marks[i]);
    }
    for (int i = 0; i <= 4; i++)
    {
        // printf("%d\n", marks[i]); it will print the all array
        if (marks[i] < 35)
        {
            printf("%d ", i);
        }
    }
}