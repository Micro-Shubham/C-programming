// check whether the number is armstrong or not only for three digit//
#include <stdio.h>
int main()
{
    int n, a, b, r, s;
    printf("enter number a");
    scanf("%d", &a);
    b = a;
    s = 0;
    while (a > 0)
    {
        r = a % 10;
        s = (r * r * r) + s;
        a = a / 10;
    }
    if (b == s)
    {
        printf("number is armstrong");
    }
    else
    {
        printf("number is not armstrong");
    }

    return 0;
}
