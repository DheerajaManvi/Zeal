/*


*/

#include <stdio.h>


void main () {

   char ch ;
   int i = 0 ; 

   printf ( "\nEnter a character: " ) ;
   scanf  ("%c", &ch ) ;

   if ( ( ch >= 'A' ) && ( ch <= 'Z' ) ) {
      printf ("\n%c is Uppercase", ch ) ;
      i = 1 ;
   }

   if ( ( ch >= 'a' ) && ( ch <= 'z' ) ) {
      printf ("\n%c is Lowercase", ch ) ;
      i = 1 ;
   }

   if ( i == 0 ) {

      printf ("\nNot an Alphabet!!") ;
   }

   printf ("\n");

}

