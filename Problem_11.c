#include <stdio.h>

int main()
{
    int multiply, count, cnt, sum = 0, remainder, number;
    count = 0;
    multiply = 1;
    printf("enter the number:");
    scanf("%d", &number);
    int q = number;
    while (q != 0)
    {
        q = q / 10;
        count++;
    }
    q = number;
    cnt = count;
    while (q != 0)
    {
        remainder = q % 10;
        while (cnt != 0)
        {
            multiply = remainder * multiply;
            cnt--;
        }
        sum = sum + multiply;
        cnt = count;
        q = q / 10;
        multiply = 1;
    }

    if (sum == number)
    {
        printf("%d number is armstrong ", number);
    }
    else
    {
        printf("%d number is not armstrong ", number);
    }

    return 0;
}