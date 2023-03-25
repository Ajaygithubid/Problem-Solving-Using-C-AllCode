#include <stdio.h>
void printHello(); // function prototype
void printGoodbye();

int main()
{
    // function call
    printGoodbye();
    printHello();
    return 0;
}

void printHello() // function definition
{
    printf("Hello Chitkara\n");
    return;
}

void printGoodbye() // function definition
{
    printf("Goodbye\n");
    return;
}
/*
Isme order follow hota hai hum his order me
function ko call krenge uusi order me function print hoga
*/