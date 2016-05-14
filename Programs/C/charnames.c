/*



*/

#include <stdio.h>

int main() {


   char n1[100], n2[100] ;
   int  i, n1l, n2l, len ;
   int  n1p, n2p ;

   printf("\nEnter a Name1: " ) ;
   scanf ( "%s", n1 ) ;

   printf("\nEnter a Name2: " ) ;
   scanf ( "%s", n2 ) ;

   for ( i = 0 ; n1[i] != '\0'; i++ ) ;
   n1l = i ;

   for ( i = 0 ; n2[i] != '\0'; i++ ) ;
   n2l = i ;

   len = n1l ;
   if ( n2l > n1l ) { len = n2l ; }



   n1p = 1; n2p = 1;
 
   for ( i= 0 ;  i < len; i++ ) {

      if ( n1[i] == '\0' ) { n1p = 0 ; }
      if ( n2[i] == '\0' ) { n2p = 0 ; }

      if ( n1p ) { printf ("\n%c ", n1[i] ); } else { printf("\n  ") ; }
      if ( n2p ) { printf ("%c", n2[i] ); }
 
   }

   printf ("\n\n");

}


