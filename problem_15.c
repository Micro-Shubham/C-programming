#include <stdio.h>
int main()
{
    int n;
    printf("please enter number ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        printf("%d ", i);
        if (i % 2 == 0)
            printf("even\n");
        else
            printf("odd\n");
    }
}