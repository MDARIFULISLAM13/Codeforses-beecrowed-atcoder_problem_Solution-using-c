#include <string.h>
#include <string.h>
int main()
{
    char a[100];
    scanf("%s", &a);
    int b = strlen(a);
    int count = 0;
    for (int i = 0; i < b - 1; i++)
    {
        int c = a[i] - 96;
        int d = a[i + 1] - 96;

        if (c > d)
        {
            int e = 26 - c + d;
            int f = c - d;
            if (e > f)
            {
                count = count + f;
                printf("%d ", f);
            }
            else
            {
                count = count + e;
                printf("%d ", e);
            }
        }
        else
        {
            int e = 26 - d + c;
            int f = d - c;
            if (e > f)
            {
                printf("%d ", f);
                count = count + f;
            }
            else
            {
                count = count + e;
                printf("%d ", e);
            }
        }
    }
    printf("%d\n", count);
}