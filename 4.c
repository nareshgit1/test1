/* WAP to generate 2 table*/

#include<stdio.h>
main(){

int a,product=0,upto,i;
printf("enter a b values\n");
scanf("%d%d",&a,&upto);
  for(i=1;i<=upto;i++){
     product=a*i;
    printf("%d * %d = %d \n",a,i,product);
  }

}




