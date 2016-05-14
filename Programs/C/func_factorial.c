/*


*/

#include <stdio.h>

int factorial ( int ) ;


int main ( ) {

   int a,b,c ;
   int af ;


   printf ("\nEnter a Number: " ) ;
   scanf  ("%d", &a ) ;

   printf ("\nEnter a Number: " ) ;
   scanf  ("%d", &b ) ;

   printf ("\nEnter a Number: " ) ;
   scanf  ("%d", &c ) ;

   af = factorial( a ) ;
   printf ("\nFactorial of %d is: %d", a, af ) ; 


   printf ("\nFactorial of %d is: %d", b, factorial(b) ) ; 
   printf ("\nFactorial of %d is: %d", c, factorial(c) ) ; 

   printf ("\n\n");

}

int factorial ( int num ) {

   int factorial = 1 ;

   for ( int i = 1; i <= num; i++ ) {

      factorial = factorial * i ;

   }

   return ( factorial ) ;

}


