/*

func_sum.c

*/

#include <stdio.h>

int readInt ( char p[] ) {

   int n ;

   printf ("%s", p );
   scanf ( "%d", &n ) ;
   return ( n ) ;
}

char toUpper ( char c ) {

   if ( c >= 'a' && c <= 'z' ) {

      return ( c - 32 ) ;

   }

}


char toLower ( char c ) {

  int i = 10 ;

   if ( c >= 'A' && c <= 'Z' ) {

      return ( c + 32 ) ; 
   }

}


int decr ( int n ) {

   return ( n - 1 ) ;
}

int incr ( int n ) {

   return ( n + 1 ) ;

}

int absolute ( int n ) {

   if ( n < 0 ) { return ( n * -1 ) ; }
   return ( n ) ;

}

int sumOfNumbers ( int n1, int n2 ) {

   int s ;   /* return ( n1 + n1 ) ; */

   s = n1 + n2 ;

   return ( s ) ;

}

int prodOfNumbers ( int p1, int p2 ) {

   return ( p1 * p2 ) ;

}


int main () {

   int ret, n1, n2 ;

   ret = sumOfNumbers ( 11, 22 ) ;
   printf ("\nRet Val= %d", ret );

   n1 = readInt ( "\nEnter 1st Number: " ) ;
   n2 = readInt ( "Enter 2nd Number: " ) ;

   ret = sumOfNumbers ( n1, n2 ) ;
   printf ("\nRet Val= %d", ret );

   ret = prodOfNumbers ( n1, n2 ) ; 
   printf ("\nProd Of Number( %d X %d ): %d", n1, n2, ret ) ;

   printf ( "\nd toUpper %c", toUpper ( 'd' )  ) ;
   printf ( "\nD toLower %c", toLower ( 'D' )  ) ;
   printf ( "\n$ toLower %c", toLower ( '@' )  ) ;

   printf ("\n\n");
}
