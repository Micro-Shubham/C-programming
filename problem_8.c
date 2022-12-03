#include <stdio.h>
int main()
{
    int sum, i, a, n;
    printf("enter number ");
    scanf("%d ", &n);
    sum = 0;
    i = 1;
    while (i <= n)
    {
        a = i * 2 - 1;
        sum = sum + a;
        printf("%d\n", a);
        i++;
    }

    printf("%d\n", sum);

    return 0;
}
