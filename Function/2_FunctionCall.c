#include <stdio.h>
void england()
{
    printf("I love England\n");
    return;
}
void japan()
{
    printf("I love japan\n");
    england();
    return;
}
void india()
{
    printf("I love India\n");
    japan();
    return;
}
int main()
{
    india();
}