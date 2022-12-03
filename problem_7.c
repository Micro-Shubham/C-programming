/*sum of odd number*/
#include <stdio.h>
int main()
{
    int i, n, a, sum;
    printf("enter number");
    scanf("%d", &n);
    i = 1;
    sum = 0;
    while (i <= n)
    {
        if (i % 2 != 0)
        {
            sum = i + sum;
        }
        i++;
    }
    printf("%d", sum);
    return 0;
}