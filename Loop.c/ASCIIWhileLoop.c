// Type casting
#include <stdio.h>
int main()
{
    int i = 65;
    while (i <= 90)
    {
        printf("%d-", i);
        char ch = (char)i; // char ch = (char)i; (char)i is type casting
        i++;
        printf("%c ", ch);
    }
}