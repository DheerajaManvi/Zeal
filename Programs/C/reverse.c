/*

Printing reverse number.

*/

#include<stdio.h>
main(){

   int n,rn=0;

   printf("enter any number:");
   scanf("%d",&n);

   while(n!=0){
   
       rn=(rn*10)+n%10;
       n=n/10;
     }

   printf("The reverse number is:%d\n",rn);
} 

