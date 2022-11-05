#include<stdio.h>
int main()  {
int n,i;
printf("enter number");
scanf("%d",&n);
int sum =0;
for(i=1;i<=n;i++) {
sum=sum+i;
}
printf("sum is %d", sum);
return 0;
}