/*



*/

#include <stdio.h>

int main() {


   char ch[100] ;

   printf("\nEnter a Name: " ) ;
   scanf ( "%s", ch ) ;

   printf ("\nName: %s", ch ) ;

   for ( int i= 0 ; ch[i] != '\0'; i++ ) {
      printf ("\n%c", ch[i] ) ;
   }

   printf ("\n\n");

}


