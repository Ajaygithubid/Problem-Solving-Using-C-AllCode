// Straight line
/*
x1,y1,x2,y2,x3,y3
*/
#include <stdio.h>
int main()
{
    double x1, x2, x3, y1, y2, y3, m1, m2;
    printf("Enter the cordinates:");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &x2, &x3, &y1, &y2, &y3);
    m1 = (y2 - y1) / (x2 - x1);
    m2 = (y3 - y2) / (x3 - x2);
    if (m1 == m2)
    {
        printf("Straight line");
    }
    else
    {
        printf("Not a straight line");
    }
}