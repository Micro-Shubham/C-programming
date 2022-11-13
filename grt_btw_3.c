#include <stdio.h>
//greater number between three number //
int main() {
int a , b, c;
printf("enter number a ");
scanf("%d",&a);
printf("enter number b ");
scanf("%d",&b);
printf("enter number c ") ;
scanf("%d",&c);
if(a>b && b>c) {
printf("enter a is greater number ");

}
if (b>a && a>c) {
printf("b is graeter number ");

}
else {
    printf("c is greater number ");
}
return 0;
}