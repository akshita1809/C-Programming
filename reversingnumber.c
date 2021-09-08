#include <stdio.h>
int main(){
int a, x, y, z, w, n;
long int revnum;
printf("enter a 5 digit number:");
scanf("%d", &a);
x = a%10;
a= a/10;
y = a%10;
a= a/10;
z = a%10;
a= a/10;
n = a%10;
a= a/10;
w = a%10;
a= a/10;
revnum = x*10000 + y*1000 + z*100 + n*10 + w;
printf("the reversed number is %d", revnum);
return 0;
}
