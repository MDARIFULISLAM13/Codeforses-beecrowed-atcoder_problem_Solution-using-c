#include <stdio.h>

int max(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    // Read input values
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);

    // Try all possible ways to place signs and brackets
    int result1 = a + b + c;
    int result2 = a * b * c;
    int result3 = a + b * c;
    int result4 = a * (b + c);

    // Find the maximum value
    int maxResult = max(max(result1, result2), max(result3, result4));

    // Print the maximum value
    printf("%d\n", maxResult);

    return 0;
}
