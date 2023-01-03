#include <stdio.h>
/* square of any number */
int main()
{
    int i, n, b;
    i = 1;
    printf("enter number ");
    scanf(" %d", &n);
    while (i <= n)
    {
        b = i * i;
        printf("%d\n", b);
        i++;
    }
    return 0;
}