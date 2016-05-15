/*


*/

#include <stdio.h>


int absolute ( int ) ;
void printArrayInt ( int, char[], int [] ) ;
int myround ( int ) ;
int square ( int ) ;
int cube ( int ) ;
int quady ( int ) ;
int fifth5th ( ) ;


int main() {

   int n, a[100], b[100], c[100], s[100], q[100], quad[100], fifth[100] ;

   printf ("\nEnter any Number: " ) ;
   scanf  ("%d", &n ) ;

   for ( int i = 0 ; i < n; i++ ) {
      printf ("Enter %d Number: ", i+1 ) ;
      scanf  ("%d", &a[i] ) ;
   }

   for ( int i = 0 ; i < n ; i++ ) { 
      b[i] = absolute ( a[i] ) ;
      c[i] = myround ( b[i] );
      s[i] = square ( b[i] ) ; 
      q[i] = cube ( b[i] ) ;
      quad[i] = quady( b[i] ) ;
      fifth[i] = fifth5th ( b[i] );
   }

   printArrayInt ( n, "Org", a ) ;
   printArrayInt ( n, "Abs", b ) ;
   printArrayInt ( n, "Round", c ) ;
   printArrayInt ( n, "^2", s ) ;
   printArrayInt ( n, "^3", q ) ;
   printArrayInt ( n, "^4", quad ) ;
   printArrayInt ( n, "^5", fifth ) ;


}


int square ( int num ) {

   return ( num * num ) ;

} 


int cube ( int num ) {

   return ( square( num ) * num ) ;

}


int quady ( int num ) {

   return ( cube ( num ) * num ) ;

}


int fifth5th ( int num ) {

   return ( num * num * num * square ( num ) ) ;

}


int myround ( int num ) {

   if ( num % 10 < 5 ) { return ( num - (num%10) ) ; }
   return ( num + 10 - num % 10 ) ;

}


int absolute ( int value ) {

   if ( value < 0 ) {
     return ( value * -1 ) ;
   }

   return ( value ) ;

}


/*
printArrayInt:
   Inputs: int, char [], int []
   output: void
   Description: This is function is to print Integer Arrays with comment text (char[])
   
   Example:
   Array(Round): [ 1, 2, 3,.... ]
*/
void printArrayInt ( int n, char name[], int num[] ) {

    printf ("\nArray (%s): [ ", name ) ;

    for ( int i = 0; i < n ; i++ ) {
       printf ("%d", num[i] ) ;
       if ( i < ( n-1 ) ) { printf (", ") ; }
    }

    printf (" ]\n") ;

}


