/*

Print the numbers which are in the fibinocci series and 
are also prime

*/

#include<stdio.h>
main() {

   int a,b,c,d,i,p,n;

   printf("Enter any number:");
   scanf("%d",&n);

   i = 0;
   a = 1;
   b = 1;
   c = i;

   while( i <= n ) {

      c = a + b;
      a = b;
      b = c;

      p = 1;
      d = 2;

      while( d < c && p == 1) {

         if( c % d == 0) {
  
            p = 0;
         } 
         
         d++;
      }

      if ( p == 1 ) {
         printf("%d ,",c);

      }

      i++;
   }

   printf("\n");

}




















