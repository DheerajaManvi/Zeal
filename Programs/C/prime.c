/*

Program to print prime number

*/

#include<stdio.h>
main() {
   int i,n,p=1;

   printf("Enter any number:");
   scanf("%d",&n);

   i=2;

   while(i<n){
     if(n%i==0){
           p=0;
               }
         i++;
            }
     if(p=1) {
       printf("prime number\n");
             }

      else {
        printf("not a prime number\n");
           }
       }
