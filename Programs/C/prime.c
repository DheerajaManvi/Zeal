/*

Program to print prime number

*/

#include<stdio.h>
main() {
   int i,n,p,c;

   printf("Enter any number:");
   scanf("%d",&n);

   c = 2;

   while( c <= n) {

      i = 2;
      p = 1;

   while (i < c && p == 1) {  

      if( c % i == 0) {

           p = 0;
     }
      i++;
   }
         
     if(p == 1) {

       printf(" %d, ",c);
     }
      c++;
   }
      printf("\n");
}
