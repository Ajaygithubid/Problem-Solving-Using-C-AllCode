#include <stdio.h>
int areaRect(int length, int breadth);

int main()
{
    int l = 10, b = 5;
    int area = areaRect(l, b);
    printf("%d\n", area);
}

int areaRect(int length, int breadth)
{
    int area;
    area = length * breadth;
    return area;
}