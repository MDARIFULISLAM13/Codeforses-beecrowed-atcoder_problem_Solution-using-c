#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        int *a = (int *)malloc(n * sizeof(int));
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }

        int operations = 0;
        int **operationsList = (int **)malloc(n * sizeof(int *));
        for (int i = 0; i < n; ++i)
        {
            operationsList[i] = (int *)malloc(2 * sizeof(int));
        }

        for (int i = 0; i < n; ++i)
        {
            if (a[i] < 0)
            {
                // Replace negative number with 0
                ++operations;
                operationsList[i][0] = i + 1;
                operationsList[i][1] = 0;
            }
            else
            {
                // Replace positive number with the minimum absolute value between the current element and 0
                ++operations;
                operationsList[i][0] = i + 1;
                operationsList[i][1] = (a[i] < abs(a[i])) ? a[i] : 0;
            }
        }

        // Output the result
        printf("%d\n", operations);
        for (int i = 0; i < n; ++i)
        {
            printf("%d %d\n", operationsList[i][0], operationsList[i][1]);
            free(operationsList[i]);
        }
        free(operationsList);
        free(a);
    }

    return 0;
}
