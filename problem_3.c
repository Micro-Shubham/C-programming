/*check whether given number is divisible by 5 and 11 or not */
#include <stdio.h>
int main () {
int a;
printf("enter number ");
scanf("%d",&a);
if(a%11==0 && a%5==0)  {
printf("number is divisible by 11 and 5");

}
 else {
    printf("number is not divisible by 11 and 5");
 }
return 0;


}