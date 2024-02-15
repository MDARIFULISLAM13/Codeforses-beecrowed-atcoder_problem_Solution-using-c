#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    int a;
    scanf("%d", &a);
    char c[] = "codeforces";
    for (int i = 1; i <= a; i++)
    {
        char b[100];
        scanf("%s", b);

        int count = 0;
        for (int l = 0; b[l] != '\0'; l++)
        {
            if (c[l] != b[l])
            {
                count++;
            }
        }
        printf("%d\n", count);
    }
}