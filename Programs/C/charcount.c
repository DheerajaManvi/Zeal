/*


*/

#include <stdio.h>

int main() {

   char ch[1000] ;
   int  cc[256] ;
   int i ;

   for ( i = 0 ; i < 256; i++ ) {
      cc[i] = 0 ;
   }

   printf ("\nEnter Text: " ) ;
   scanf ("%s", ch );

   for ( i=0; ch[i] != '\0'; i++ ) {
      cc[ ch[i] ]++ ;
   }

   
   for ( i = 0 ; i < 256; i++ ) {

      if ( cc[i] != 0 ) { printf ("\n%c = %d", i, cc[i] ); }

   }


}
