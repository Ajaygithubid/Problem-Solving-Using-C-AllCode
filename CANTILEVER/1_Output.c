#include <stdio.h>
int main()
{
    printf("%d\t", sizeof(6.5));
    printf("%d\t", sizeof(90000)); //\t (Horizontal tab) –
    // We use it to shift the cursor to a couple of spaces to the right in the same line.
    // \a (Audible bell) – A beep is generated indicating the execution of the program to alert the user.
    // \r (Carriage Return) – We use it to position the cursor to the beginning of the current line.
    printf("%d", sizeof('A'));
}