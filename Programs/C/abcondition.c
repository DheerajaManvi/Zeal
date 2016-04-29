/*


*/

#include <stdio.h>

main() {

   int a, b ;

   printf ("Enter two numbers: " ) ;
   scanf ( "%d %d", &a, &b ) ;

   if ( a == b ) {
      printf ("\nThe given two numbers %d, %d are equal", a, b ) ;
   }

   if ( a != b ) {
      printf ( "\nThe given two numbers %d, %d are not equal", a,b ) ;
   }

   if ( a < b ) {
      printf ( "\n%d is less than %d", a, b  ) ;
   }

   if ( a > b ) {
      printf ( "\n%d is greater than %d", a, b ) ;
   }

   printf ("\n") ;
}
