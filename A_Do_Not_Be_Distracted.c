#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        int b;
        scanf("%d", &b);
        char arr[b];
        scanf("%s", &arr);
        int t = 0;
        for (int l = 0; l < b; l++)
        {
            int f = arr[l - 1] - arr[l];

            if (arr[l] < arr[l - 1] && f != 1)
            {
                printf("NO\n");
                t = 1;
                break;
            }
        }
        if (t == 0)
        {
            printf("YES\n");
        }
    }
}