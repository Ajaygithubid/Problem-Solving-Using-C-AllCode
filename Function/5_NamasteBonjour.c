/*
Write a function that print Namaste if user is Indian and Bonjour if the user is french
*/
#include <stdio.h>
void namaste();
void bonjour();

int main()
{
    char ch;
    printf("Enter 'I' for indians and 'B' for french:");
    scanf("%c", &ch);
    if (ch == 'i')
    {
        namaste();
    }
    else
    {
        bonjour();
    }
}

void namaste()
{
    printf("Namaste\n");
}

void bonjour()
{
    printf("Bonjour\n");
}