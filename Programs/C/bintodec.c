/*

Binary to Decimal conversion

*/


#include <stdio.h>

main() {

   int i,b,pr,pi,t,p,r ;
   long n ;

   printf ("\nEnter a binary number: " ) ;
   scanf ("%ld", &n ) ;

   t = n ;
   p =0; b = 0 ;
  
   while ( t != 0 ) {

      r = t % 10 ;
      t = t / 10 ;

      pi = 1;
      pr = 1;

      while ( pi <= p ) {
         pr = pr * 2 ;
         pi++;
      }

      p++;
      b = b + r * pr ;
   }

   printf ("\nDecimal for '%ld' is: %d", n, b ) ;

   printf("\n");
}

