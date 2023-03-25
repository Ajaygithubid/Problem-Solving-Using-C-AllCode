#include <stdio.h>
int stair(int n)
{
    if (n <= 2)
        return n; // Base Case
    int totalWays = stair(n - 1) + stair(n - 2);
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
} // If we gave number of stair is 100 why its not working