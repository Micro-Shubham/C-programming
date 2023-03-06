#include <stdio.h>
int main()
{
    int n;
    printf("please enter the number");
    scanf("%d", &n);
    for (int i = n; i >= 1; i++)
    {
        for (int j = 1; j < i; j--)
        {
            for (int r = 1; r < j; r++)
            {
                printf(" ");
            }
            printf("*");
        }

        printf("\n");
    }
    return 0;
}