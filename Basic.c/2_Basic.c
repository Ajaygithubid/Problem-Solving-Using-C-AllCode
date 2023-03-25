#include <stdio.h>
int main()
{
    // Area of circle : Pi r*r
    int r;
    float area;
    printf("Enter the radius:");
    scanf("%d", &r);
    area = 3.14 * r * r;
    printf("Area of circle is: %f", area);
    return 0;
}