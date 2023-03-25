#include <stdio.h>
int main()
{
    float che = 90;
    float eng = 91;
    float math = 92;
    float phy = 93;
    float bio = 94;
    float percentage;
    percentage = (che + eng + math + phy + bio) / 5;
    printf("%f", percentage);
    return 0;
}