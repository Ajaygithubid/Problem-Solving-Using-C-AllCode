#include <stdio.h>

/* function declaration */
int addition();

int main()
{
    // local variable definition
    int answer;

    answer = addition(); // calling a function to get addition value.
    printf("The addition of the two numbers is: %d\n", answer);
    return 0;
}

// function returning the addition of two numbers
int addition()
{
    int num1 = 10, num2 = 5; // local variable definition
    return num1 + num2;
}