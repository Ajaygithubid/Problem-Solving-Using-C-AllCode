#include <stdio.h>
int stair(int n)
{
    if (n <= 3)
        return n; // Base Case
    int totalWays = stair(n - 1) + stair(n - 2) + stair(n - 3);
    return totalWays;
}
int main()
{
    int n;
    printf("Enter  the number of stair:");
    scanf("%d", &n);
    int ways = stair(n);
    printf(" %d Number of stair to climb on %d Ways", n, ways);
    return 0;
}