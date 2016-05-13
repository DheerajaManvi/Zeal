/*

To print upper case to a given string.

*/

#include<stdio.h>
main() {

   int i ;
   char c[100];

   printf("\nEnter any string: ");
   scanf("%s", c);

   for ( i = 0; c[i] != '\0' ; i++ ) {

      if ( c[i] >= 96 && c[i] <= 122 ) {

          c[i] = c[i]  - 32 ;

      }

   } 

   printf ("\nUpperCase: %s", c ) ;

   for ( i = 0; c[i] != '\0' ; i++ ) {

      if ( c[i] >= 65 && c[i] <= 90 ) {

          c[i] = c[i]  + 32 ;

      }

   }
   printf ("\nLowerCase: %s", c ) ;

   printf ("\n");
}
