#include <stdio.h>
int main()
{
    int input;
    scanf("%d", &input);
    while (1)
    {
        input += 1;
        int a = input / 1000;
        int b = input / 100 % 10;
        int c = input / 10 % 10;
        int d = input % 10;

        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    printf("%d\n", input);
}