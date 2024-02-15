#include <stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    char b[] = "LIFE IS NOT A PROBLEM TO BE SOLVED";
    for (int i = 0; i < a; i++)
    {
        printf("%c", b[i]);
    }
    printf("\n");
}
