/*

Prime number

*/

#include<stdio.h>
main() {

   int i,d,p;

   printf("Enter any number: ");
   scanf("%d", &i);

   d = 2;
   p = 1;
 
   while( d < i && p == 1) {

      if( i % d == 0) {

         p = 0;
      }

      d++;

   }

   if( p == 1) {

      printf("%d is a prime number \n ",i);
   }

   else {

      printf("%d is not a prime number \n",i);

   }
}
