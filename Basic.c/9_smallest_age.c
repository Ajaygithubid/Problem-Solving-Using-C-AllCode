/*#include <stdio.h>
int main()
{
    int Ram, shyam, ajay;
    printf("Enter the age:");
    scanf("%d %d %d", &Ram, &shyam, &ajay);
    if (Ram < shyam && Ram < ajay)
    {
        printf("Ram is youngest");
    }
    else if (shyam < Ram && shyam < ajay)
    {
        printf("Shyam is youngest");
    }
    else if (ajay < shyam && ajay < Ram)
    {
        printf("Ajay is youngest");
    }
    else
    {
        printf("All are in same age ");
    }
}*/

#include <stdio.h>
int main()
{
    int Ram;
    printf("Enter the age of ram:");
    scanf("%d", &Ram);
    int shyam;
    printf("Enter the age of shyam:");
    scanf("%d", &shyam);
    int ajay;
    printf("Enter the age of ajay:");
    scanf("%d", &ajay);
    if (Ram < shyam && Ram < ajay)
    {
        printf("Ram is youngest");
    }
    else if (shyam < Ram && shyam < ajay)
    {
        printf("shyam is youngest");
    }
    else if (ajay < Ram && ajay < shyam)
    {
        printf("ajay is youngest");
    }
    else
    {
        printf("All are in same age");
    }
    return 0;
}
