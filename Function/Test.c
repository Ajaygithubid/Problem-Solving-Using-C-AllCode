// #include <stdio.h>
// int addition();

// int main()
// {
//     int answer;
//     answer = addition();
//     printf("The sum is equal to %d", answer);

//     return 0;
// }
// int addition()
// {
//     int a = 10, b = 19;
//     return a + b;
// }

/*-------------------------------------*/
#include <stdio.h>
int add();
int main()
{
    // int result;
    // result = add();
    // printf("The given is %d", result);
    add();
}

int add()
{
    int a;
    printf("Enter the value:");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("Even\n");
    }
    else
    {
        printf("Odd");
    }
}