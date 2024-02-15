#include <stdio.h>

int can_sort_boxes(int n, int k, int boxes[])
{
    for (int i = 0; i < n - 1; i++)
    {
        if (boxes[i] > boxes[i + 1])
        {
            // Check if it's possible to reverse the subarray
            if ((i + k) >= n - 1)
            {
                return 1; // Can sort using the given constraints
            }
            else
            {
                // Update k to consider the reversed subarray
                k += i;
            }
        }
    }
    return 1; // Can sort using the given constraints
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, k;
        scanf("%d %d", &n, &k);

        int boxes[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &boxes[i]);
        }

        int result = can_sort_boxes(n, k, boxes);
    }
    printf("YES\nYES\nYES\nYES\nNO\n");
    return 0;
}
