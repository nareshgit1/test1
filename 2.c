/* WAP swap 2 numbers without using third variable*/

#include<stdio.h>
main(){
int a,b;
printf("enter a b values\n");
scanf("%d%d",&a,&b);

printf("enter a b values before is a=%d b=%d\n",a,b);
a=a+b;
b=a-b;
a=a-b;

printf("enter a b values after is a=%d b=%d\n",a,b);

}




