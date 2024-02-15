#include <stdio.h>
#include <string.h>
int main()
{
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++)
    {
        char b[10];
        scanf("%s", &b);

        char c[] = "YES";
        char d[] = "yes";
        int count = 0;
        for (int l = 0; l < 3; l++)
        {
            if (b[l] == c[count] || b[l] == d[count])
            {
                count++;
            }
        }
        if (count == 3)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
}
